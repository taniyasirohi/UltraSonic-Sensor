# Ultrasonic Sensor Project

## Overview
This project is an ultrasonic distance measurement system utilizing an **HC-SR04 ultrasonic sensor** and an **Arduino** microcontroller. It calculates the distance of an object by measuring the time taken for an ultrasonic pulse to travel to the object and back. The results are displayed on a **serial monitor**, providing real-time distance readings. This project serves as a foundation for robotics, automation, and security applications.

## Features
- **Accurate Distance Measurement**: Measures distances ranging from **2 cm to 400 cm** with an accuracy of about **3 mm**.
- **Real-time Output**: Displays distance readings on the **serial monitor** of the Arduino IDE.
- **Arduino-Based System**: Uses an **Arduino Uno (or compatible board)** for processing and control.
- **Low Power Consumption**: Efficient operation with minimal power requirements.
- **Simple and Cost-Effective**: Uses basic and affordable components.
- **Expandable Design**: Can be integrated with **buzzers, LEDs, motors, or wireless modules** for enhanced functionality.

## Components Required
### 1. **Hardware Components:**
- **Arduino Uno** (or any compatible board)
- **Ultrasonic Sensor (HC-SR04)**
- **Jumper Wires** (Male-to-Male and Male-to-Female)
- **Breadboard** (optional for organized wiring)
- **Power Source** (USB cable for Arduino or external battery)

### 2. **Software Requirements:**
- **Arduino IDE** (for writing and uploading the code)
- **Serial Monitor** (for displaying distance readings)

## Working Principle
1. **Triggering the Ultrasonic Sensor:**
   - The **Trig** pin is set to **HIGH** for **10 microseconds**, sending an ultrasonic pulse.
2. **Echo Reception:**
   - The ultrasonic wave travels through the air, reflects off an object, and returns to the **Echo** pin.
3. **Time Measurement:**
   - The time taken for the wave to travel to the object and return is measured.
4. **Distance Calculation:**
   - Using the formula:  
     **Distance (cm) = (Time in µs × Speed of Sound) / 2**  
     - Speed of sound = **343 m/s** (or **0.0343 cm/µs**)
5. **Output Display:**
   - The calculated distance is displayed in **centimeters** on the **Serial Monitor**.

## Circuit Diagram & Connections
- **Ultrasonic Sensor (HC-SR04) Pin Configuration:**
  - **VCC** → **5V (Arduino)**
  - **GND** → **GND (Arduino)**
  - **Trig** → **Digital Pin 9 (Arduino)**
  - **Echo** → **Digital Pin 10 (Arduino)**

- **Powering the System:**
  - The Arduino can be powered via a **USB cable** or an **external battery pack**.

## Installation and Setup
1. **Set up the circuit:**
   - Connect the HC-SR04 sensor to the Arduino as per the connections mentioned above.
2. **Upload the Code:**
   - Open the **Arduino IDE**.
   - Paste or write the ultrasonic sensor code.
   - Select **Board: Arduino Uno** and the correct **COM port**.
   - Click **Upload** to transfer the code to the Arduino.
3. **Run the Program:**
   - Open the **Serial Monitor** (set baud rate to 9600).
   - Observe real-time distance measurements displayed in centimeters.

## Troubleshooting
### **No Distance Readings on Serial Monitor?**
- Ensure **correct wiring** of the HC-SR04 sensor.
- Check if the **correct COM port** is selected in the Arduino IDE.
- Verify that the **baud rate is set to 9600** in the Serial Monitor.
- Ensure that **both the Arduino and sensor are receiving power**.

### **Incorrect or Fluctuating Readings?**
- Avoid placing the sensor near **objects that absorb sound (e.g., soft surfaces)**.
- Ensure **a clear line of sight** between the sensor and the object.
- Make sure there are **no interfering noise sources** (such as fans or other ultrasonic devices).
- Increase the delay between readings if values are unstable.

## Future Enhancements
- **Add a Buzzer Alert System:** 
  - Trigger an alarm if an object is detected within a specific range.
- **Wireless Monitoring:**
  - Send distance data to a web dashboard via WiFi (ESP8266) or Bluetooth (HC-05).
- **Multi-Sensor Integration:**
  - Use multiple ultrasonic sensors for **wider area detection**.
- **Object Avoidance in Robotics:**
  - Integrate with a motor driver to implement **collision avoidance** for robots.

## Applications
- **Obstacle Detection** in robotics.
- **Smart Parking Systems** for vehicle distance measurement.
- **Security Systems** for intrusion detection.
- **Automated Water Level Monitoring** in tanks.

## Conclusion
This project provides hands-on experience with **ultrasonic sensors**, **Arduino programming**, and **distance measurement techniques**. It serves as a foundational project for **automation, robotics, and embedded systems development**.

## License
This project is **open-source**. You are free to **modify, enhance, and distribute** it as needed.

---
**Author:** Taniya Sirohi 
**GitHub Repository:** https://github.com/taniyasirohi/UltraSonic-Sensor.git
