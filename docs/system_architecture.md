# System Architecture

## Functional Flow

AC Mains Supply
↓
Voltage Measurement
↓
Current Measurement
↓
ESP32 Data Acquisition
↓
Signal Processing
↓
Fault Detection
↓
Output Generation

---

## Fault Conditions

The system can detect:

1. Voltage Loss
2. Voltage Sag
3. Voltage Swell
4. Overcurrent
5. Supply Failure

---

## Processing Sequence

1. Read voltage sensor.
2. Read current sensor.
3. Filter sensor values.
4. Compare against thresholds.
5. Detect abnormal conditions.
6. Trigger output response.
