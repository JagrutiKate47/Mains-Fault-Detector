# Hardware Design

## Controller

ESP32 development board is used as the main processing unit.

Reasons for selection:

- Built-in Wi-Fi
- Multiple ADC channels
- Low cost
- Large community support

---

## Voltage Measurement

The ZMPT101B module is used for isolated AC voltage measurement.

Features:

- Electrical isolation
- Adjustable sensitivity
- Analog output

Connection:

OUT → ESP32 ADC1_CH0

---

## Current Measurement

The ACS712 sensor is used for current measurement.

Features:

- Hall-effect sensing
- Electrical isolation
- Analog output

Connection:

OUT → ESP32 ADC1_CH1

---

## Power Supply

The system operates using a regulated 5V supply.

Power distribution:

- ESP32
- Voltage Sensor
- Current Sensor
- Status LED

---

## User Interface

The system includes:

- Power indicator LED
- Terminal blocks for wiring
- Expansion output header

---

## Mechanical Design

The enclosure is designed to:

- Protect electronics
- Allow cable routing
- Enable easy maintenance
- Support wall mounting

Material:

PETG

Dimensions:

150 mm × 100 mm × 30 mm
