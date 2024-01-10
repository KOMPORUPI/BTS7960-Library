#include "BTS7960.h"
#include <Arduino.h>

BTS7960::BTS7960(byte PWMA, byte PWMB)
{
  PWM_A = PWMA;
  PWM_B = PWMB;
  pinMode(PWM_A, OUTPUT);
  pinMode(PWM_B, OUTPUT);
}

void BTS7960::drive(int16_t magnitude)
{
  constrain(PWM_A, -255, 255);
  constrain(PWM_B, -255, 255);
  if (magnitude>0)
  {
    analogWrite(PWM_A, abs(magnitude));
    analogWrite(PWM_B, 0);
  }
  else if (magnitude<0)
  {
    analogWrite(PWM_A, 0);
    analogWrite(PWM_B, abs(magnitude));
  }
  else
  {
    analogWrite(PWM_A, 0);
    analogWrite(PWM_B, 0);
  }
}
