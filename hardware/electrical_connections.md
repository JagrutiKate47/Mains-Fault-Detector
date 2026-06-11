# Electrical Connections

## Power Connections

5V Supply → ESP32 VIN

GND → ESP32 GND

---

## Voltage Sensor

VCC → 5V

GND → GND

OUT → ESP32 ADC1_CH0

---

## Current Sensor

VCC → 5V

GND → GND

OUT → ESP32 ADC1_CH1

---

## Status LED

Anode → 5V through resistor

Cathode → GND

---

## AC Input

Live → Voltage Sensor Input

Neutral → Voltage Sensor Input

Live → ACS712 Input

---

## Output Terminal

GPIO16 → Output Terminal

3.3V → Output Terminal

GND → Output Terminal
