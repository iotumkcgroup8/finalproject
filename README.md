# IoT-enabled pipeline leak detection and Realtime warning system in LPG industry

![WhatsApp Image 2022-12-05 at 7 45 51 PM](https://user-images.githubusercontent.com/120582695/208021020-70f72531-c074-4817-ba9b-ea3ef99bc761.jpeg)


# Abstract
Safety plays a foremost part in our today’s world and an automatic safety system must be employed in environments like institutions, hospitals, homes, industries, and workplaces.
 One of the precautionary measures one has to take to avoid the danger associated with the gas leakage is to install a gas leakage system detector at susceptible places. 
This Project explains a liquefied petroleum gas (LPG) leakage, monitoring system. The gas detector MQ-5 used in the design is responsible for capturing the gas that is leaking. An Arduino microcontroller that is use acts as the brain of the whole research, it controls all the components used in the design.
 If the gas sensor detects a gas leakage, it will make an alarm-using buzzer and will send SMS messages to the registered mobile numbers with the help of the GSM module. A Liquid Crystal Display is used in the research to display the gas leakage or absence of gas leakage
 
# Introduction

There is always a high risk of leakage whenever gas is used, threatening human properties and lives. Therefore, an affordable and low-cost gas leakage detector system can assist in decreasing the risk over several years.
 In the past years, several accidents have been caused by liquefied petroleum gas (LPG) or methane leakages in factories and homes. This leakage of gases has led to the loss of several lives and properties due to explosions and fire. Modern technology must be utilized to give early warning signs to assure that adequate time is available to mitigate probable danger.

# Proposed System

In this Project, a gas leak detection system has been developed. This system will detect the presence of gases such as liquefied petroleum gas (LPG) and methane in LPG gas supply pipe. 
If there is a gas leakage of any kind that can be a danger to society or the people living in that environment, the MQ-5 sensor used in the circuit design will automatically detect it, the GSM modem in the design will send a warning signal to the users whose numbers are registered in the system, webpage or to the monitoring company that is responsible for the building or organization. 
This system also includes a buzzer that will sound an alarm if a gas leakage is detected. This system can also be used in various other places, such as oil and gas pipelines, kitchens, and gas storage facilities

# Procedure

This research aims to design a gas detection system that will automatically detect gas leakage along the gas supply pipe and send an alert. This device is expected to be used in household security where industries, heaters and gadgets that make use of natural gas and LPG may be a cause of danger
This gas detector system can likewise be used for other functions in factories or plants that depend on LPG or natural gas for their operation. The gas leakage detector system will send a notification message to the registered mobile phones.
 An Arduino Heltec wifi 32 kit microcontroller is used as the brain of the system. The gas detector system is controlled and monitored through the web application. Once a leak is detected, the power supply is automatically cut off, and the buzzer is turned on. Using this web application, the system can be further controlled by the user, for example by switching on the fan or water pump. 
This smart gas detection system is proposed for use in various hospitals. If there is a sudden leakage of gas, the gas sensor used in the design will send a signal to the Arduino. The Arduino will process the signal and then send a notification to other external gadgets involved in the design, such as the liquid crystal display, the magnetic buzzer, and the GSM module which stores the phone numbers of the individuals who are responsible for fighting fires in the hospital; the alarm will be sent repetitively until an acquiescent reply message is received
The gadget was designed to be mounted either on the Pipe or wall. Once the system is mounted in a suitable place with a supply of electrical energy, it will be ready to automatically send a notification using short message service (SMS) or by calling the owners if there is a gas leakage.
 The detection system comprises an Heltec 32 wifi kit, a MQ-5 gas sensor with ATmega328 microcontroller mounted on it, an active buzzer for raising the alarm, a webage interaction to send the message, a solenoid valve to close or open the gas provision, and a relay module, which is activated with the help of the digital signal sent by the Arduino .
 
![WhatsApp Image 2022-12-05 at 7 45 58 PM](https://user-images.githubusercontent.com/120582695/208022524-df593ed7-a882-4d49-b082-6345014752d8.jpeg)

Thus, the design of this gas leakage sensor-based detection system, which can both notify and control, is low cost and innovative. The gas detection system is very proficient, portable, user-friendly, cost-effective, and small in size . 
It features an analog to digital conversion (ADC) method based on electronic gadgets, which is used to detect gas leakage using mechanical devices in factories, households, gas stations, and vehicles. These are places where detection of gas leaks is an essential concern to evade any kind of danger. 
This gadget comprises a processing section, which receives the date inputs, processes the data, and then produces an output. Depending on the output information, it then starts a fan and activates a light-emitting diode. 
concentration of the gas surpasses a certain level, it then activates the buzzer, while also switching off the gas power supply and informing the relevant parties by sending an alert message via the monitoring computer system.

# Pin Connections

![WhatsApp Image 2022-12-05 at 7 47 26 PM](https://user-images.githubusercontent.com/120582695/208022751-373a76ec-5540-4f3c-ba1a-7706af56917e.jpeg)

The gas concentration level for a particular operational area will be stored in the Mat lab “Database Explorer Tool” to make a summary of the gas eminence of this environment or area available for scrutiny, to inform any risk assessment 

 There is an LPG leak detection and alert system. This system triggers the buzzer and shows the severity of the leak to notify persons once the LPG leak is detected. The system is exceptionally simple yet dependable . The design of the gas detector is based on the Internet of Things. The gas detector sensor used in the design will capture the data and upload it into an information cloud. 

If there is gas leakage, the sensor will detect it and sound an alarm with the help of a buzzer. There is an LCD screen to display the leakage, notify the observer, and trigger the exhaust fan in the particular area or section where the gas is leaking, to then extract the leaked gas .

# Arduino ide

![image](https://user-images.githubusercontent.com/120582695/208022912-8967dfe2-4874-4d56-9fa0-1770f96e51f5.png)

![image](https://user-images.githubusercontent.com/120582695/208022996-ff87f416-583f-4e92-8b3d-d140f524dc78.png)

# Google Sheet

![image](https://user-images.githubusercontent.com/120582695/208023057-51252e46-ae70-4708-bec3-e10e7989679c.png)

# Google Script

![image](https://user-images.githubusercontent.com/120582695/208023104-e8517fe1-778d-4462-8d66-5414fe034cc2.png)

VsCode

![image](https://user-images.githubusercontent.com/120582695/208023134-9fa6b446-cfb2-4093-bc73-8f001aa1c52d.png)

![image](https://user-images.githubusercontent.com/120582695/208023151-18d06147-a35e-4bf0-837c-186783359172.png)

Web Page

![image](https://user-images.githubusercontent.com/120582695/208023173-cbc39b4c-d6b0-4cdc-9c62-b46ddfcd2b4d.png)

# OUTCOMES

This Project aimed to construct a system to detect gas leakage, when the concentration of gas is above the amount expected in the environment. 
When the user activates the system, the Arduino microcontroller reads the presence of gas in the environment. 
When it detects a concentration above the expected value, the GSM modem receives the data from the Arduino microcontroller and sends an SMS to the owner's mobile phone. 
To allow communication between the GSM modem and the mobile phone, AT command is used, because the GSM modem can only understand AT commands. Using this, it can communicate with a mobile phone, computer, and the Arduino microcontroller.




