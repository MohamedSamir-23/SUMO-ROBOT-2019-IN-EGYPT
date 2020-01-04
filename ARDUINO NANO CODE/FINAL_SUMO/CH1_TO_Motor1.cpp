#include "Arduino.h"
#include "CH1_TO_Motor1.h"
const uint8_t CH1RC =3 ;
const uint8_t LED_BLUE =12 ;
const uint8_t LED_RED =11 ;
volatile int CH1_signal_value=0;

CH1_MOTOR1::CH1_MOTOR1(){
}

void CH1_MOTOR1::SETUPCH1(){
  pinMode(CH1RC, INPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}


int CH1_MOTOR1::CH1_RC_signal(){

  CH1_signal_value = pulseIn(CH1RC , HIGH);
    //Serial.print("CH1 pulse  ");
    //Serial.print(CH1_signal_value);
    //Serial.print('\t');
    if(CH1_signal_value==0){
      digitalWrite(LED_RED,HIGH);
      digitalWrite(LED_BLUE,LOW );
      Serial.print("led RED on");
      CH1_signal_value=1000;
      return CH1_signal_value;
    }
    else{
     digitalWrite(LED_RED,LOW);
     digitalWrite(LED_BLUE,HIGH );
     Serial.print("LED_BLUE on");
    CH1_signal_value = map(CH1_signal_value , 837, 1838 , -255 , 255);
    CH1_signal_value = constrain(CH1_signal_value , -255 , 255);
    //Serial.print("CH1   ");
    //Serial.print(CH1_signal_value);
    //Serial.print('\t');
    return CH1_signal_value;
    }
}

CH1_MOTOR1 CH1_RC_MOTOR1 = CH1_MOTOR1();
