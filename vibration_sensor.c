/*
    Project name : Vibration Sensor
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-vibration-sensor
*/

const int vibrationPin = 2; // Digital pin connected to the vibration sensor
const int ledPin = 13; // Digital pin connected to the LED

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(vibrationPin, INPUT); // Set vibration pin as input
  pinMode(ledPin, OUTPUT); // Set LED pin as output
}

void loop() {
  int vibrationValue = digitalRead(vibrationPin); // Read vibration sensor value
  
  // Print vibration sensor value to Serial Monitor
  Serial.print("Vibration Sensor Value: ");
  Serial.println(vibrationValue);

  // If vibration is detected, turn on the LED
  if (vibrationValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Vibration Detected! LED Turned ON.");
    delay(1000); // Delay to keep the LED on for a short period
  } else {
    digitalWrite(ledPin, LOW);
  }
}
