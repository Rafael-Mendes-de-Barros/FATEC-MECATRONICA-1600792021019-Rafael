#include <Servo.h>

Servo servo1;
int servo_pin=3;

void setup(){
    servo1.attach(3);
}

void loop(){
    for(int i=0; i<120; i++){
        servo1.write(i);
        delay(500);
    }
}
