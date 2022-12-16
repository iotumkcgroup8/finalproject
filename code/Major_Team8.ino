#include "Arduino.h"
#include <WiFi.h>
#include <HTTPClient.h>
#include <MQUnifiedsensor.h>
#include "heltec.h"

//----------------------------------------------------------------------------------------------------------------------------------------------------------
float gassensor1=27;
float gassensor2=36;
float S1=gassensor1;
float S2=gassensor2;


const char * ssid = "#201";
const char * password = "46464646";
String GOOGLE_SCRIPT_ID = "https://docs.google.com/document/d/1CAd0szxWRe8P57irR5amxzEGanI5m0rA_TJiPEKChBI/edit";


float currentS1 = 0.0; 
float currentS2 = 0.0;

void displayReadingsOnOled() { 
    
  String ALeakageDisplay ="sensor1: " + (String)currentS1 +  "PPM"; 
  String BLeakageDisplay ="sensor2: " + (String)currentS2 +  "PPM"; 
  
  // Clear the OLED screen 
  Heltec.display->clear(); 
  // Prepare to display temperatureF 
  Heltec.display->drawString(0, 0, ALeakageDisplay); 
  // Prepare to display temperatureC 
  Heltec.display->drawString(0, 12, BLeakageDisplay); 
  // Display the readings 
  Heltec.display->display(); 
} 

  const int sendInterval = 50;
  WiFiClientSecure client;

//----------------------------------------------------------------------------------------------------------------------------------------------------------

void setup()

{
   Serial.begin(9600);

   


   
    // LED light on  
   pinMode(LED,OUTPUT); 
   digitalWrite(LED,HIGH); 
   
    // Start Heltec specific LCD display 
  
   Heltec.begin(true /*DisplayEnable Enable*/, false /*LoRa Enable*/, false /*Serial Enable*/); 
   currentS1 = analogRead(gassensor1); 
   currentS2 = analogRead(gassensor2); 
   
   displayReadingsOnOled();
   
   // Network Setup
    delay(1000);
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid,password);
    Serial.print("Connecting to Wi-Fi");
    while (WiFi.status() !=WL_CONNECTED) {
    digitalWrite(2, LOW);
    delay(5000);
    Serial.print("*");
    digitalWrite(2,HIGH);
    delay(5000);
 }
 Serial.println("ok");

   
} 



void loop()
{
    float S1 = analogRead(gassensor1); 
    float S2 = analogRead(gassensor2); 
    
    
    Serial.print("SENSOR2:");
    Serial.print(S2);
    Serial.println("ppm");
    Serial.print("SENSOR1:");
    Serial.print(S1);
    Serial.println("ppm");

 if ((S1>=0)&&(S2>=0))
 
  {
      if ((S2>S1)&&(S2>3800)){
      Serial.println("L1");

      currentS1 = S1; 
      currentS2 = S2;
      displayReadingsOnOled();
      
      // write on network
       write_google_sheet("value1="+String(S1)+"&value2="+String(S2)+"&value3="+"L1");   
      
      }
      else if ((S2>S1)&&(S2>1500)){ 
      Serial.println("L2");

      currentS1 = S1; 
      currentS2 = S2;
      displayReadingsOnOled();
      
      // write on network
       write_google_sheet("value1="+String(S1)+"&value2="+String(S2)+"&value3="+"L2"); 
      }  
      else if ((S1>S2)&&(S1>3800)){
      Serial.println("L4"); 

      currentS1 = S1; 
      currentS2 = S2;
      displayReadingsOnOled();
      
      // write on network
       write_google_sheet("value1="+String(S1)+"&value2="+String(S2)+"&value3="+"L3"); 
      }
      else if ((S1>S2)&&(S1>1500)){
      Serial.println("L3");
      currentS1 = S1; 
      currentS2 = S2;
      displayReadingsOnOled();
      
      // write on network
       write_google_sheet("value1="+String(S1)+"&value2="+String(S2)+"&value3="+"L4");  
      }
     
  }
  
else  {
      Serial.println("NOLEAKAGE"); 
      
      currentS1 = S1; 
      currentS2 = S2;
      displayReadingsOnOled();
      
      // write on network
       write_google_sheet("value1="+String(S1)+"&value2="+String(S2)+"&value3="+"NOlEAKAGE"); 
     
      }
      
delay(4500);
}

/////////////////////////////////////////////////
 void write_google_sheet(String params) {
  HTTPClient http;
  String url="https://script.google.com/macros/s/"+GOOGLE_SCRIPT_ID+"/exec?"+params;
  Serial.println(url);
  Serial.println("updating Leakage& Location Status");
  http.begin(url.c_str());
  http.setFollowRedirects(HTTPC_STRICT_FOLLOW_REDIRECTS);
  int httpCode = http.GET();
  Serial.print("HTTP Status Code: ");
  Serial.println(httpCode);

  String payload;
  if (httpCode > 0) {
      payload = http.getString();
      Serial.println("payload: "+payload);
  }
  http.end();

 }
