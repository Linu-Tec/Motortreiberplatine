/* Beispielskizze zur Steuerung eines Schrittmotors mit A4988-Schrittmotortreiber,
 *  AccelStepper-Bibliothek und Arduino: Anzahl der Schritte oder Umdrehungen.
 * Weitere Informationen: https://www.makerguides.com
 * 
 * https://www.makerguides.com/a4988-stepper-motor-driver-arduino-tutorial/
 */

// Die AccelStepper-Bibliothek einschließen:
#include <AccelStepper.h>

// Schrittmotoranschlüsse und Motorschnittstellentyp definieren.
// Der Motorschnittstellentyp muss bei Verwendung eines Treibers auf 1 gesetzt werden:
#define dirPin 3
#define stepPin 2
#define motorInterfaceType 1

// Neue Instanz der AccelStepper-Klasse erstellen:
AccelStepper stepper = AccelStepper(motorInterfaceType, stepPin, dirPin);

void setup() {
  // Maximale Geschwindigkeit und Beschleunigung einstellen:
  stepper.setMaxSpeed(50000);
  stepper.setAcceleration(20);
}

void loop() {
  // Setze die Zielposition:
  stepper.moveTo(80000);
  // Mit eingestellter Geschwindigkeit und Beschleunigung / Verzögerung zur Zielposition laufen:
  stepper.runToPosition();

  delay(1000);

  // Zurück zu Null gehen:
  stepper.moveTo(0);
  stepper.runToPosition();

  delay(1000);
}
