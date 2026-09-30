# Day 8: LDR Readout on OLED

This project reads the analog value from an LDR light sensor and displays the live reading on an SSD1306 OLED connected to an ESP32.

## Components

- ESP32 DevKit v1
- LDR sensor module
- SSD1306 OLED display (I2C, 128×64)

## Connections

### LDR module

- VCC → ESP32 3V3
- GND → ESP32 GND
- AO → ESP32 GPIO 34

### SSD1306 OLED

- VCC → ESP32 3V3
- GND → ESP32 GND
- SDA → ESP32 GPIO 21
- SCL → ESP32 GPIO 22

## Wokwi Simulation

[Run the simulation](https://wokwi.com/projects/476323782673668097)

## How to use

1. Start the Wokwi simulation.
2. Adjust the light level on the LDR sensor.
3. Observe the reading update on the OLED display.

## Arduino Libraries

Install the **Adafruit SSD1306** and **Adafruit GFX Library** libraries if your sketch uses them.

