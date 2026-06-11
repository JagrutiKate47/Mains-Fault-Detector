#include <Arduino.h>

#define VOLTAGE_PIN 36
#define CURRENT_PIN 39

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    int voltageValue = analogRead(VOLTAGE_PIN);
    int currentValue = analogRead(CURRENT_PIN);

    Serial.print("Voltage ADC: ");
    Serial.print(voltageValue);

    Serial.print(" Current ADC: ");
    Serial.println(currentValue);

    if(voltageValue < 500)
    {
        Serial.println("Voltage Fault Detected");
    }

    delay(1000);
}
