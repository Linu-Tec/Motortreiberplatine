/*
 * Beispielskizze zur Steuerung eines Schrittmotors mit A4988-Schrittmotortreiber und 
 * Arduino ohne Bibliothek. 
 * Weitere Informationen: https://www.makerguides.com
 * 
 * https://www.makerguides.com/a4988-stepper-motor-driver-arduino-tutorial/
*/

// Schrittmotoranschlüsse und Schritte pro Umdrehung definieren:
#define dirPin 3
#define stepPin 2
#define stepsPerRevolution 200

void setup() {
  // Pins als Ausgabe deklarieren:
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

void loop() {
  // Drehrichtung im Uhrzeigersinn einstellen:
  digitalWrite(dirPin, HIGH);

  // Schrittmotor 1 Umdrehung langsam drehen:
  for (int i = 0; i < stepsPerRevolution; i++) {
    // Diese vier Zeilen ergeben einen Schritt:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(2000);
  }

  delay(1000);

  // Drehrichtung gegen den Uhrzeigersinn einstellen:
  digitalWrite(dirPin, LOW);

  // Den Schrittmotor 1 Umdrehung schnell drehen:
  for (int i = 0; i < stepsPerRevolution; i++) {
    // Diese vier Zeilen ergeben einen Schritt:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(1000);
  }

  delay(1000);

  // Drehrichtung im Uhrzeigersinn einstellen:
  digitalWrite(dirPin, HIGH);

  // Den Schrittmotor 5 Umdrehungen schnell drehen:
  for (int i = 0; i < 5 * stepsPerRevolution; i++) {
    // Diese vier Zeilen ergeben einen Schritt:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }

  delay(1000);

  // Drehrichtung gegen den Uhrzeigersinn einstellen:
  digitalWrite(dirPin, LOW);

  // Schrittmotor 5 Umdrehungen schnell drehen:
  for (int i = 0; i < 5 * stepsPerRevolution; i++) {
    // Diese vier Zeilen ergeben einen Schritt:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }

  delay(1000);
}
