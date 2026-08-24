/* Beispielskizze zur Steuerung eines Schrittmotors mit A4988-Schrittmotortreiber,
 *  AccelStepper-Bibliothek und Arduino: kontinuierliche Drehung.
 *  Weitere Informationen: https://www.makerguides.com 
 *  
 *  https://www.makerguides.com/a4988-stepper-motor-driver-arduino-tutorial/
 */

// Die AccelStepper-Bibliothek einschließen:
#include <AccelStepper.h>

// Schrittmotoranschlüsse und Motorschnittstellentyp definieren. Der Motorschnittstellentyp muss bei Verwendung eines Treibers auf 1 gesetzt werden:
#define dirPin 3
#define stepPin 2
#define motorInterfaceType 1

// Neue Instanz der AccelStepper-Klasse erstellen:
AccelStepper stepper = AccelStepper(motorInterfaceType, stepPin, dirPin);

void setup () {  
  // Stellen Sie die maximale Geschwindigkeit in Schritten pro Sekunde ein:
  stepper.setMaxSpeed(2000);
}

void loop () {  
  // Geschwindigkeit in Schritten pro Sekunde einstellen:
  stepper.setSpeed(1000);
  // Den Motor mit einer konstanten Drehzahl wie von setSpeed ​​() eingestellt einstellen:
  stepper.runSpeed();
}
