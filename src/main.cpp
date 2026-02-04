#include <Arduino.h>
#include <Servo.h>
Servo myservo;

int pos = 0;
void setup() {
    Serial.begin(9600);
    myservo.attach(9);
    Serial.println("Servo initiate");

// write your initialization code here
}

void loop() {
// write your code here
    myservo.write(0);
    delay(500);
    myservo.write(90);
    delay(500);
    myservo.write(120);
    delay(500);
    myservo.write(180);
    delay(500);

}