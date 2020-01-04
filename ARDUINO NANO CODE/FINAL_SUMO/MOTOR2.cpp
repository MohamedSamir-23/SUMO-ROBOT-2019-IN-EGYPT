#include "Arduino.h"
#include "MOTOR2.h"
const uint8_t DIRM2 = 8;
const uint8_t PWM_M2 = 9;
motor2_class::motor2_class(){
}

void motor2_class::SETUPM2(){
  pinMode(DIRM2, OUTPUT);
  pinMode(PWM_M2, OUTPUT);
}


void motor2_class::FOROWRDM2(int M2_speed) {
  digitalWrite(DIRM2, HIGH);
  analogWrite(PWM_M2, M2_speed);



}
void motor2_class::BACKWORDM2(int M2_speed) {
  digitalWrite(DIRM2, LOW);
  analogWrite(PWM_M2, M2_speed);


}
void motor2_class::STOPM2() {
  digitalWrite(DIRM2, LOW);
  analogWrite(PWM_M2, 0);


}

motor2_class MOTOR2_RC = motor2_class();
