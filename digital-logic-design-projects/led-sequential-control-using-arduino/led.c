// Define the number of LEDs and the pins they are connected to
const int numLEDs = 12;
int ledPins[numLEDs] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

// Define the delay time between LED changes (in milliseconds)
const int delayTime = 200;

void setup() {
  // Set all LED pins as OUTPUT
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // LED Chaser - Run LEDs in sequence
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on the current LED
    delay(delayTime);              // Wait
    digitalWrite(ledPins[i], LOW);  // Turn off the current LED
  }

  // LED Chaser - Run LEDs in reverse sequence
  for (int i = numLEDS - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH); // Turn on the current LED
    delay(delayTime);              // Wait
    digitalWrite(ledPins[i], LOW);  // Turn off the current LED
  }

  // LED Blink - Blink all LEDs simultaneously
  for (int i = 0; i < numLEDS; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on all LEDs
  }
  delay(500); // Wait for 500 milliseconds
  for (int i = 0; i < numLEDS; i++) {
    digitalWrite(ledPins[i], LOW);  // Turn off all LEDs
  }
  delay(500); // Wait for 500 milliseconds
}
