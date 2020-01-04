#include "Arduino.h"
#include "MOTOR1.h"
const uint8_t DIRM1 = 7;
const uint8_t PWM_M1 = 6;
motor1_class::motor1_class() {
}

void motor1_class::SETUPM1() {
  pinMode(DIRM1, OUTPUT);
  pinMode(PWM_M1, OUTPUT);

}


void motor1_class::FOROWRDM1(int M1_speed) {
  digitalWrite(DIRM1, HIGH);
  analogWrite(PWM_M1, M1_speed);



}
void motor1_class::BACKWORDM1(int M1_speed) {
  digitalWrite(DIRM1, LOW);
  analogWrite(PWM_M1, M1_speed);


}
void motor1_class::STOPM1() {
  digitalWrite(DIRM1, LOW);
  analogWrite(PWM_M1, 0);


}

motor1_class MOTOR1_RC = motor1_class();
