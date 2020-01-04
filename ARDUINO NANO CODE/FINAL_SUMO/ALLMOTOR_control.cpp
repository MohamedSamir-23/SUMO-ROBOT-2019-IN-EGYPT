#include "Arduino.h"
#include "ALLMOTOR_control.h"
#include "MOTOR1.h"
#include "MOTOR2.h"

ALLMOTOR_class::ALLMOTOR_class() {

}

void ALLMOTOR_class::SETUPALLMOTOR() {

  MOTOR1_RC.SETUPM1();
  MOTOR2_RC.SETUPM2();

}


void ALLMOTOR_class::ch1Forword_ch2Stop(int M1_speed, int M2_speed) {

  MOTOR1_RC.FOROWRDM1(M1_speed);
  MOTOR2_RC.FOROWRDM2(M2_speed);


}

void ALLMOTOR_class::ch1Backword_ch2Stop(int M1_speed, int M2_speed) {
  MOTOR1_RC.BACKWORDM1(M1_speed);
  MOTOR2_RC.BACKWORDM2(M2_speed);
}

void ALLMOTOR_class::ch1Stop_ch2Stop() {
  MOTOR1_RC.STOPM1();
  MOTOR2_RC.STOPM2();

}

void ALLMOTOR_class::ch1Stop_ch2Right(int M1_speed, int M2_speed) {
  MOTOR1_RC.BACKWORDM1(M1_speed);
  MOTOR2_RC.FOROWRDM2(M2_speed);
}



void ALLMOTOR_class::ch1Stop_ch2Left(int M1_speed, int M2_speed) {
  MOTOR1_RC.FOROWRDM1(M1_speed);
  MOTOR2_RC.BACKWORDM2(M2_speed);
}


void ALLMOTOR_class::ch1Forword_ch2Right(int M1_speed, int M2_speed) {
  MOTOR1_RC.FOROWRDM1(M1_speed);
  MOTOR2_RC.FOROWRDM2(M2_speed);

}

void ALLMOTOR_class::ch1Backword_ch2Right(int M1_speed, int M2_speed) {
  MOTOR1_RC.BACKWORDM1(M1_speed);
  MOTOR2_RC.BACKWORDM2(M2_speed);

}


void ALLMOTOR_class::ch1Forword_ch2Left(int M1_speed, int M2_speed) {
  MOTOR1_RC.FOROWRDM1(M1_speed);
  MOTOR2_RC.FOROWRDM2(M2_speed);

}


void ALLMOTOR_class::ch1Backword_ch2Left(int M1_speed, int M2_speed) {
  MOTOR1_RC.BACKWORDM1(M1_speed);
  MOTOR2_RC.BACKWORDM2(M2_speed);

}




ALLMOTOR_class ALLMOTOR_JOY = ALLMOTOR_class();
