# Servo Motors Project

## Overview
This project controls **6 servo motors** using an Arduino.  
The task was divided into two parts:
1. Run all servos with a **sweep movement** for 2 seconds.
2. Set all servos back to **90° (neutral position)** after the sweep.

In addition, I also designed a **simple walking algorithm** for a humanoid robot using servos.

---

## Walking Algorithm (Concept)
1. Start with all servos at 90° (standing position).
2. Move the right leg forward:
   - Increase right hip angle.
   - Bend the right knee.
3. Shift the weight onto the right leg.
4. Return the right leg to neutral position.
5. Repeat the same sequence with the left leg.
6. Alternate between legs to create a walking cycle.

---

## Files
- **servo_control.ino** → Arduino code for controlling the 6 servos.
- **README.md** → Project description and walking algorithm.

---

## Notes
- Servo angles can be adjusted depending on the type/model of servo motors used.
- The walking algorithm is kept simple, but it can be improved by adding synchronized arm movements for better balance.
