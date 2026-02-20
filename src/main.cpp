#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Krish_choudhary
 * @date 2026-02-20
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */
// TODO 1:
// Define LDR analog pin (Use A0)
const int LDR_PIN = A0;

// TODO 2:
// Create variable to store sensor reading
int ldrValue = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("LDR Light Intensity Monitoring System Initialized");
    Serial.println("Monitoring ambient light levels...");
}

void loop() {

    // TODO 5:
    // Read analog value from LDR
    ldrValue = analogRead(LDR_PIN);

    // TODO 6:
    // Print raw ADC value
    Serial.print("Raw ADC Value: ");
    Serial.println(ldrValue);

// TODO 7:
    // Apply threshold logic (Bright / Dark detection)
    if (ldrValue < 500) {   // Adjust threshold based on calibration
        // TODO 8:
        // Print brightness status
        Serial.println("Status: BRIGHT Environment");
    } else {
        Serial.println("Status: DARK Environment");
    }

    // TODO 9:
    // Add delay (1 second)
    delay(1000);
}
