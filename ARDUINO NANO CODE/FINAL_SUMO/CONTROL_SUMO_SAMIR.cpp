#include "Arduino.h"
#include "CH1_TO_Motor1.h"
#include "CH2_TO_Motor2.h"
#include "ALLMOTOR_control.h"
#include "CONTROL_SUMO_SAMIR.h"
volatile int ch1_value = 0;
volatile int ch2_value = 0;
Control_SUMO_RC::Control_SUMO_RC() {
}

void Control_SUMO_RC::SETUP_SUMO_RC() {
  ALLMOTOR_JOY.SETUPALLMOTOR();
  CH1_RC_MOTOR1.SETUPCH1();
  CH2_RC_MOTOR2.SETUPCH2();

}


void Control_SUMO_RC::Control_Motor_SUMO_RC() {
  ch1_value = CH1_RC_MOTOR1.CH1_RC_signal();
  ch2_value = CH2_RC_MOTOR2.CH2_RC_signal();

  if (ch1_value >= -255 && ch1_value <= 85 && ch2_value >= -115 && ch2_value <= -95) { //forword
    //Serial.print("forword");
    if (ch1_value >= 33 && ch1_value  <= 92)
    {
      ALLMOTOR_JOY.ch1Forword_ch2Stop(63, 63);
    }
    else if (ch1_value >= -26 && ch1_value < 33) {
      ALLMOTOR_JOY.ch1Forword_ch2Stop(126, 126);

    }
    else if (ch1_value >= -85 && ch1_value < -26) {
      ALLMOTOR_JOY.ch1Forword_ch2Stop(190, 190);

    }
    else {
      ALLMOTOR_JOY.ch1Forword_ch2Stop(255, 255);

    }
  }

  else if (ch1_value >= 115 && ch1_value <= 255 && ch2_value >= -115 && ch2_value <= -95) { //backword
    //Serial.print("backword");
    if (ch1_value >= 115 && ch1_value  <= 150)
    {
      ALLMOTOR_JOY.ch1Backword_ch2Stop(63, 63);
    }
    else if (ch1_value > 150 && ch1_value  <= 185) {
      ALLMOTOR_JOY.ch1Backword_ch2Stop(126, 126);

    }
    else if (ch1_value > 185 && ch1_value <= 220) {
      ALLMOTOR_JOY.ch1Backword_ch2Stop(190, 190);

    }
    else {
      ALLMOTOR_JOY.ch1Backword_ch2Stop(255, 255);

    }

  }


  else if (ch1_value >= 88 && ch1_value <= 105 && ch2_value >= -90 && ch2_value <= 255) { //right
    //Serial.print("right");
    if (ch2_value <= -27 && ch2_value >= -90) {

      ALLMOTOR_JOY.ch1Stop_ch2Right(63, 63);
    }
    else if (ch2_value <= 36 && ch2_value > -27) {
      ALLMOTOR_JOY.ch1Stop_ch2Right(126, 126);
    }
    else if (ch2_value <= 99 && ch2_value > 36) {

      ALLMOTOR_JOY.ch1Stop_ch2Right(190, 190);
    }
    else {
      ALLMOTOR_JOY.ch1Stop_ch2Right(255, 255);

    }

  }

  else if (ch1_value >= 88 && ch1_value <= 105 && ch2_value >= -255 && ch2_value <= -123) { //left
    //Serial.print("left");
    if (ch2_value <= -123 && ch2_value >= -156) {
      ALLMOTOR_JOY.ch1Stop_ch2Left(63, 63);
    }
    else if (ch2_value < -156 && ch2_value >= -189) {
      ALLMOTOR_JOY.ch1Stop_ch2Left(126, 126);
    }
    else if (ch2_value < -189 && ch2_value >= -222) {
      ALLMOTOR_JOY.ch1Stop_ch2Left(190, 190);
    }
    else {
      ALLMOTOR_JOY.ch1Stop_ch2Left(255, 255);

    }

  }


  else if (ch1_value >= -255 && ch1_value <= 85 && ch2_value >= -90 && ch2_value <= 255) { //forwrd_Right
    //Serial.print("forwrd_Right");
    //ALLMOTOR_JOY.ch1Forword_ch2Right(200, 130);
    if (ch1_value >= -255 && ch1_value <= 85 && ch2_value <= 100 && ch2_value >= -90) {
      //Serial.println("forwrd_right 100");

      ALLMOTOR_JOY.ch1Forword_ch2Right(200, 100);
    }
     
    else {
      //Serial.println("forwrd_right 204");

      ALLMOTOR_JOY.ch1Forword_ch2Right(250, 204);

    }

  }


  else if (ch1_value >= -255 && ch1_value <= 85 && ch2_value >= -255 && ch2_value <= -123) { //forwrd_Left
    // ALLMOTOR_JOY.ch1Forword_ch2Left(32, 63);
    if (ch1_value >= -255 && ch1_value <= 85 && ch2_value <= -85 && ch2_value >= -205) {
      //Serial.println("forwrd_left 100");

      ALLMOTOR_JOY.ch1Forword_ch2Left(100, 200);
    }
     
    else {
      //Serial.println("forwrd_left 204");

      ALLMOTOR_JOY.ch1Forword_ch2Left(204, 250);

    }



  }

  else if (ch1_value >= 115 && ch1_value <= 255 && ch2_value >= -90 && ch2_value <= 255) { //Backword_Right
    //ALLMOTOR_JOY.ch1Backword_ch2Right(63, 32);
     if (ch1_value >= -255 && ch1_value <= 85 && ch2_value <= 100 && ch2_value >= -90) {
      //Serial.println("forwrd_right 100");

      ALLMOTOR_JOY.ch1Backword_ch2Right(200, 100);
    }
     
    else {
      //Serial.println("forwrd_right 204");

      ALLMOTOR_JOY.ch1Backword_ch2Right(250, 204);

    }


  }

  else if (ch1_value >= 115 && ch1_value <= 255&& ch2_value >= -255 && ch2_value <= -123) { //Backword_Left
    //ALLMOTOR_JOY.ch1Backword_ch2Left(32, 63);
    if (ch1_value >= -255 && ch1_value <= 85 && ch2_value <= -85 && ch2_value >= -205) {
      //Serial.println("forwrd_left 100");

      ALLMOTOR_JOY.ch1Backword_ch2Left(100, 200);
    }
     
    else {
      //Serial.println("forwrd_left 204");

      ALLMOTOR_JOY.ch1Backword_ch2Left(204, 250);

    }
  }

  else {//STOP
    //Serial.println("STOP");
    ALLMOTOR_JOY.ch1Stop_ch2Stop();

  }

}

Control_SUMO_RC SUMO_RC = Control_SUMO_RC();
