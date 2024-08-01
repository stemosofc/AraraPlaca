#include "stemOSBoard.h"

Digital di1(PortasDigitais::PORTA_1);

void setup() {
  Serial.begin(115200);
}


void loop() {
 if(!di1.getInput()) {
    servo1.setPosition(270);
 } else {
    servo1.setPosition(0);
 }

 Serial.print("Posição Encoder: ");
 Serial.println(motor1.encoder.getPosition());
}


