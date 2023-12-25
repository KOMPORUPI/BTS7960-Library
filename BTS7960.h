#ifndef BTS7960_h
#define BTS7960_h
#include <Arduino.h>

class BTS7960
{
  public:
  BTS7960(byte PWMA, byte PWMB);
    void drive(int16_t magnitude);

  private:
    byte PWM_A;
    byte PWM_B;
};
#endif
