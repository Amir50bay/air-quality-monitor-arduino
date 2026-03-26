# Air Quality Monitor with Arduino and ESP8266

An embedded environmental monitoring prototype that reads temperature, humidity, and gas sensor data, displays measurements on an LCD, and supports Wi-Fi-based data transmission through an ESP8266 module.

## Overview

This project combines sensor acquisition, local display, and wireless communication in a single monitoring system.

The Arduino-based sensing unit reads environmental data from connected sensors and shows the results on a 16x2 LCD. An ESP8266 module is used as the communication layer for Wi-Fi-based transmission to a phone or local network.

The current prototype is implemented on a breadboard and serves as a foundation for future improvements such as better calibration, cleaner hardware integration, data logging, and PCB implementation.

## Features

- Real-time temperature monitoring
- Real-time humidity monitoring
- Gas sensor measurement
- 16x2 LCD output
- Wi-Fi communication through ESP8266
- Breadboard-based embedded system prototype

## Hardware Used

- Arduino Uno
- ESP8266 Wi-Fi module
- DHT22 temperature and humidity sensor
- MQ-series gas sensor
- 16x2 LCD display
- Breadboard
- Jumper wires

## System Architecture

- Arduino Uno reads data from the connected sensors
- Sensor values are processed and displayed locally on the LCD
- ESP8266 provides Wi-Fi connectivity for wireless transmission

## Repository Structure

```text
air-quality-monitor-arduino/
├── README.md
├── LICENSE
├── src/
│   ├── Air_Quality_Monitor_Arduino.ino
│   └── ESP8266_AirMonitor_WiFi.ino
└── assets/
    ├── prototype-full.jpg
    ├── lcd-display.jpg
    ├── sensor-closeup.jpg
    └── breadboard-wiring.jpg
```

## Project Images

### Full Prototype

<img width="1252" height="832" alt="image" src="https://github.com/user-attachments/assets/6ce0dc48-b230-4f46-bc16-04cf5913014a" />

### LCD Output

<img width="1251" height="921" alt="image" src="https://github.com/user-attachments/assets/d435acbc-f84c-4215-93f0-ba5424725bcb" />

### Sensor Setup

<img width="761" height="803" alt="image" src="https://github.com/user-attachments/assets/51e22699-38b5-4629-b818-0d55314b2c51" />

### Breadboard Wiring

<img width="1290" height="762" alt="image" src="https://github.com/user-attachments/assets/8d4d6f3f-01f0-46e7-a719-4d8321322813" />

## Notes

The current images mainly show the sensing and display portion of the prototype.
The ESP8266 communication module is included in the project code and overall system design as the wireless transmission component.

## Future Improvements
- Improve sensor calibration
- Add structured data transmission
- Add mobile or web dashboard integration
- Improve wiring organization
- Design a PCB-based version
- Add long-term data logging

## What I Learned

Through this project, I practiced:

- sensor interfacing
- embedded programming
- analog and digital data acquisition
- LCD integration
- Wi-Fi module testing
- hardware/software integration
- breadboard prototyping and debugging
