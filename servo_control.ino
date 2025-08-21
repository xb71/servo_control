#include <Servo.h>

// تعريف السيرفو
Servo servo1, servo2, servo3, servo4, servo5, servo6;

void setup() {
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);

  // Sweep لمدة ثانيتين
  unsigned long startTime = millis();
  while (millis() - startTime < 2000) {
    for (int pos = 0; pos <= 180; pos++) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      servo5.write(pos);
      servo6.write(pos);
      delay(5);
    }
    for (int pos = 180; pos >= 0; pos--) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      servo5.write(pos);
      servo6.write(pos);
      delay(5);
    }
  }

  // تثبيت السيرفوهات عند 90 درجة
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);
}

void loop() {
  // ما في شيء هنا، السيرفو يظل ثابت
}