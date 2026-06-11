# Smart Mains Fault Detection System

## Overview

The Smart Mains Fault Detection System is an ESP32-based embedded monitoring solution designed to detect abnormalities in electrical mains supply.

The system continuously measures voltage and current using dedicated sensors and processes the data using an ESP32 microcontroller. The collected information can be used for fault detection, predictive maintenance, and remote monitoring applications.

---

## Features

- Real-time voltage monitoring
- Real-time current monitoring
- Fault detection capability
- ESP32-based processing
- Compact enclosure design
- Expandable IoT architecture

---

## Hardware Components

| Component | Purpose |
|------------|----------|
| ESP32 | Main controller |
| ZMPT101B | AC voltage measurement |
| ACS712 | AC current measurement |
| 5V Power Supply | System power |
| Indicator LED | Status indication |
| Terminal Blocks | External wiring interface |

---

## System Architecture

Input AC Supply
↓
Voltage Sensor (ZMPT101B)
↓
ESP32 Controller
↓
Fault Detection Logic
↓
Output Interface

Input AC Supply
↓
Current Sensor (ACS712)
↓
ESP32 Controller

---

## Sensor Interface

### Voltage Sensor

ZMPT101B OUT → ESP32 ADC1_CH0

### Current Sensor

ACS712 OUT → ESP32 ADC1_CH1

---

## Applications

- Industrial monitoring
- Smart energy systems
- Predictive maintenance
- Power quality analysis
- Remote diagnostics

---

## Future Improvements

- MQTT Integration
- Cloud Dashboard
- Historical Data Logging
- Machine Learning Based Fault Prediction
- Mobile Application

---

## Author

Jagruti Kate
