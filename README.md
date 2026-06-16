# Arduino Multi-Mode LED Controller

The Arduino Multi-Mode LED Controller is an interactive LED control system that allows a user to operate an LED through the Serial Monitor using a menu-driven interface. The project demonstrates several fundamental Arduino concepts, including PWM control, analog input, serial communication, loops, conditional statements, and state management.

## Components Required
* Arduino Uno
* LED
* 1kΩ Resistor
* Potentiometer
* Breadboard
* Jumper Wires

## Features
-- ON Mode : Turns the LED on at full brightness (255).
-- OFF Mode : Turns the LED off (0).
-- Blink Mode : Allows the user to specify a duration in seconds for the LED to blink repeatedly.
-- Fade Mode : Creates a smooth fade-in and fade-out effect using PWM.
-- Brightness Control Mode : Uses a potentiometer to dynamically control LED brightness in real time.
-- Status Mode : Displays the current operating mode and brightness level. 

## Circuit Connections

### LED

| Component       | Arduino Pin            |
| --------------- | ---------------------- |
| LED Anode (+)   | D6 (through resistor)  |                 
| LED Cathode (-) | GND                    |

### Potentiometer

| Potentiometer Pin | Arduino Pin |
| ----------------- | ----------- |
| VCC               | 5V          |
| GND               | GND         |
| Signal            | A5          |

---

## Serial Menu

==MENU==
1. ON
2. OFF
3. Blink
4. Fade
5. Brightness
6. Status

Enter the corresponding number in the Serial Monitor to select a mode.

## Concepts Demonstrated

* Variables
* Conditional Statements (`if`, `else if`)
* Loops (`for`, `while`)
* Serial Communication
* PWM Output (`analogWrite`)
* Analog Input (`analogRead`)
* Potentiometer Integration
* User Input Processing
* State Tracking
* Embedded System Menu Design

## Learning Outcomes

This project was built to practice:
* Controlling hardware using software logic
* Reading user input through the Serial Monitor
* Using PWM to generate LED effects
* Mapping analog sensor values to output values
* Designing a simple menu-driven embedded application
