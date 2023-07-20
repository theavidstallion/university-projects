const int gasSensorPin = A0;  // Analog input pin for the gas sensor
const int ledPin = 13;        // Digital output pin for the LED
const int buzzerPin = 12;     // Digital output pin for the buzzer

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the gas sensor
  int sensorValue = analogRead(gasSensorPin);

  // Print the sensor value for debugging (optional)
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  // If the sensor value is above a threshold, there is gas leakage
  if (sensorValue > 500) {
    // Turn on the LED
    digitalWrite(ledPin, HIGH);

    // Buzz the buzzer
    buzzBuzzer(200); // Adjust the duration to control the buzz sound
  } else {
    // No gas leakage, turn off the LED and buzzer
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  // Add a delay between readings to avoid rapid switching
  delay(1000);
}

void buzzBuzzer(int duration) {
  tone(buzzerPin, 1000);  // You can adjust the frequency for different sounds
  delay(duration);
  noTone(buzzerPin);
}
