#include "Arduino.h"
#include "CH2_TO_Motor2.h"
const uint8_t CH2RC = 2 ;
volatile int CH2_signal_value = 0;

CH2_MOTOR2::CH2_MOTOR2() {
}

void CH2_MOTOR2::SETUPCH2() {
  pinMode(CH2RC, INPUT);
}


int CH2_MOTOR2::CH2_RC_signal() {

  CH2_signal_value = pulseIn(CH2RC , HIGH);
if(CH2_signal_value==0){
  CH2_signal_value=1000;
  return CH2_signal_value;
  }
else{
    CH2_signal_value = map(CH2_signal_value , 1058, 1991 , -255 , 255);
    CH2_signal_value = constrain(CH2_signal_value , -255 , 255);
    //Serial.print("\tCH2   ");
    //Serial.println(CH2_signal_value);
    return CH2_signal_value;
}
  
}

CH2_MOTOR2 CH2_RC_MOTOR2 = CH2_MOTOR2();
