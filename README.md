# Vibration Sensor

#### Project Overview

This project demonstrates how to use an Arduino Uno to detect vibrations using a vibration sensor module. When vibrations are detected, the Arduino turns on an LED to provide a visual indication of the vibration event. The sensor's digital output is read by the Arduino to determine the presence of vibrations.

#### Components Needed

1. **Arduino Uno**
2. **Vibration Sensor Module**
3. **LED**
4. **Resistor (220 ohms)**
5. **Jumper Wires**

### Block Diagram



#### Instructions

1. **Circuit Setup:**
   - Connect the digital output pin of the vibration sensor module to digital pin 2 on the Arduino Uno.
   - Connect the positive (+) terminal of the LED to digital pin 13 on the Arduino through a current-limiting resistor (220 ohms).
   - Connect the negative (-) terminal of the LED to GND (ground) on the Arduino.
   - Ensure the vibration sensor module is securely attached to the surface being monitored for vibrations.

2. **Initialization:**
   - Initialize serial communication at a baud rate of 9600 in the `setup()` function.
   - Set the vibration pin as an input and the LED pin as an output using the `pinMode()` function.

3. **Detect Vibrations:**
   - Read the digital value from the vibration sensor using the `digitalRead()` function.
   - Store the vibration sensor value in a variable for further processing.

4. **LED Indication:**
   - If vibrations are detected (digital value is HIGH), turn on the LED by setting the LED pin to HIGH.
   - Print a message to the Serial Monitor indicating that vibrations have been detected.
   - Optionally, add a delay to keep the LED on for a short period to provide a visual indication of the vibration event.

5. **Adjustments:**
   - Adjust the sensitivity of the vibration sensor module if necessary.
   - Experiment with different delay times to control the duration of LED indication when vibrations are detected.

#### Applications

- **Security Systems:** Detect unauthorized entry or tampering by monitoring vibrations on doors or windows.
- **Industrial Monitoring:** Monitor machinery and equipment for abnormal vibrations that may indicate malfunctions or breakdowns.
- **Seismic Activity Monitoring:** Detect minor seismic vibrations or tremors in structures or geological formations.

#### Notes

- The sensitivity and threshold of vibration sensors may vary, so it's important to calibrate the sensor according to the application requirements.
- Ensure that the vibration sensor module is securely attached to the surface being monitored to maximize sensitivity and accuracy.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner