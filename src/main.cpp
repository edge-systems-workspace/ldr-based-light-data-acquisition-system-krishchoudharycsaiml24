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
