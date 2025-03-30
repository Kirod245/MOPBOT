#include <Stepper.h>

const int SPR = 2048;  // STEPS PER ROTATION (Fixed syntax)
const int RPM = 15;    // Rotations Per Minute (Fixed syntax)

Stepper LEFT(SPR, 2, 4, 3, 5);   // The 2 stepper motors on the left side 
Stepper RIGHT(SPR, 6, 8, 7, 9);  // The 2 stepper motors on the right side 

void setup() {
  LEFT.setSpeed(RPM);
  RIGHT.setSpeed(RPM);
}

void loop() {
  LEFT.step(SPR);   // Move one full rotation (Fixed function call)
  RIGHT.step(SPR);  // Also move the right side motors
}
