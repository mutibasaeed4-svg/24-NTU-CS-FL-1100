# Homework 2 – Dual-LED PWM Control with OLED Monitoring

**Course:** Embedded IoT Systems
**Name:** <Mutiba saeed>  **ID:** <24-NTU-CS-FL-1100>

- **GitHub repo:** <https://github.com/mutibasaeed4-svg/24-NTU-CS-FL-1100>

## task 1
# ESP32 Dual LED Fading Using PWM

## 1. Project Description

This project uses an ESP32 microcontroller to control two LEDs using Pulse Width Modulation (PWM). Both LEDs gradually increase and decrease their brightness, creating a fading effect.

Each LED uses a different PWM frequency, demonstrating how to control multiple LEDs with different PWM settings.

## 2. Objectives

- Control two LEDs using the ESP32.
- Understand Pulse Width Modulation (PWM).
- Generate different PWM frequencies for two LEDs.
- Create a smooth LED fading effect by changing the duty cycle.
- Learn how to configure PWM using the ESP32 LEDC peripheral.

## 3. Hardware Requirements

- ESP32 development board
- 2 LEDs
- 2 current-limiting resistors (e.g., 220Ω or 330Ω)
- Breadboard
- Jumper wires
- USB cable for programming the ESP32

## 4. Pin Configuration

| Component | ESP32 GPIO Pin |
|---|---|
| LED 1 | GPIO 25 |
| LED 2 | GPIO 26 |
| LED 1 PWM Frequency | 1000 Hz (1 kHz) |
| LED 2 PWM Frequency | 5000 Hz (5 kHz) |
| PWM Resolution | 8-bit |

**Note:** Connect each LED in series with a current-limiting resistor. Connect the LED's other side to GND, following the correct LED polarity.

## 5. Working Principle

### Pulse Width Modulation (PWM)

PWM controls the average power delivered to an LED by switching its output ON and OFF rapidly. Changing the duty cycle changes the LED's perceived brightness.

### PWM Frequency

Frequency is the number of PWM cycles per second.

- LED 1 uses a frequency of 1000 Hz.
- LED 2 uses a frequency of 5000 Hz.

### Duty Cycle

The program uses an 8-bit PWM resolution, which provides duty-cycle values from 0 to 255.

- **0:** LED is OFF.
- **255:** LED is at maximum brightness.
- **Intermediate values:** LED brightness varies between OFF and maximum.

### Fading Effect

LED 1 starts at duty cycle 0 and gradually increases its brightness to 255, then decreases back to 0.

LED 2 starts at duty cycle 255 and gradually decreases its brightness to 0, then increases back to 255.

Both LEDs change their brightness independently and continuously.

## 6. Software Requirements

- Arduino IDE or PlatformIO
- ESP32 board support package
- Arduino framework for ESP32

The code includes compatibility for both older ESP32 Arduino core versions (before version 3) and version 3 or later, using the appropriate LEDC PWM functions.

## 7. How to Run the Project

1. Connect the two LEDs to GPIO 25 and GPIO 26 using current-limiting resistors.
2. Connect the ESP32 to your computer using a USB cable.
3. Open the project in Arduino IDE or PlatformIO.
4. Ensure the correct ESP32 board and COM port are selected.
5. Compile and upload the code to the ESP32.
6. Observe both LEDs fading continuously in opposite directions.

## 8. Important Code Components

- `ledcAttach()` configures PWM for a pin in ESP32 Arduino core version 3 or later.
- `ledcSetup()` configures a PWM channel in older ESP32 Arduino core versions.
- `ledcAttachPin()` connects a GPIO pin to a PWM channel in older versions.
- `ledcWrite()` sets the PWM duty cycle.
- `duty1` and `duty2` store the current brightness levels.
- `dir1` and `dir2` determine whether brightness increases or decreases.
- `delay(20)` pauses the loop for 20 milliseconds between brightness updates.

## 9. Expected Output

After uploading the program:

- LED 1 gradually becomes brighter and then dimmer.
- LED 2 gradually becomes dimmer and then brighter.
- Both LEDs continue fading in opposite directions.
- The LEDs use different PWM frequencies: 1 kHz and 5 kHz.

## 10. Conclusion

This project demonstrates how to generate PWM signals using an ESP32 to control two LEDs independently. It explains PWM frequency, resolution, duty cycle, and the use of software logic to create a continuous fading effect.


# task 2
# ESP32 Dual LED PWM Control with OLED

## Overview
This project uses ESP32 to control two LEDs with PWM. Both LEDs fade in and out at different frequencies, while an OLED displays their brightness percentages and frequencies.

## Components
- ESP32
- 2 LEDs and resistors
- SSD1306 OLED display

## Pin Connections
- LED 1: GPIO 18
- LED 2: GPIO 19
- OLED SDA: GPIO 21
- OLED SCL: GPIO 22

## PWM Settings
- LED 1: 1 kHz
- LED 2: 5 kHz
- Resolution: 8-bit

## Libraries
- Adafruit GFX
- Adafruit SSD1306

## Working
The ESP32 gradually changes each LED's brightness using PWM. The OLED continuously displays the brightness percentage and frequency of both LEDs.

## Expected Output
Both LEDs fade in and out, and the OLED shows their current brightness and PWM frequency.

## Conclusion
This project demonstrates PWM control and real-time OLED monitoring using ESP32.

