#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author YOUR_NAME
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
