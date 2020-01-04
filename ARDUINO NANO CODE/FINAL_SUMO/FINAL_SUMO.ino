/*
created 13 Oct 2019
  by eng Mohamed Samir
modified 15 Oct 2019
  by eng Mohamed Samir
*/
#include "Arduino.h"
#include "MOTOR1.h"
#include "MOTOR2.h"
#include "CH1_TO_Motor1.h"
#include "CH2_TO_Motor2.h"
#include "ALLMOTOR_control.h"
#include "CONTROL_SUMO_SAMIR.h"
void setup() {
  Serial.begin(9600);
  SUMO_RC.SETUP_SUMO_RC();
}

void loop() {
  SUMO_RC.Control_Motor_SUMO_RC();  
}
