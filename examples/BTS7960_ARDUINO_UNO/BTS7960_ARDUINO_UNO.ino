#include <BTS7960.h>
/*
 * EXAMPLE PROGRAM LIBRARY BTS7960 
 * 26 DESEMBER 2023
 * BY MEKANIK KRAI K.138.22.14
 * ARDUINO UNO
 */

//Menentukan 2 pin BTS
const byte PWM_A = 5;
const byte PWM_B = 6;

//Membuat objek motor
BTS7960 Motor(PWM_A, PWM_B);

void setup() {}

void loop() {
  // motor bergerak dengan kecepatan pwm 150
  Motor.drive(150);
  delay(1000);
  // motor berhenti
  Motor.drive(0);
  delay(1000);
  // motor bergerak dengan kecepatan pwm 150 dengan arah berlawanan
  Motor.drive(-150);
  delay(1000);
  // motor berhenti
  Motor.drive(0);
}
