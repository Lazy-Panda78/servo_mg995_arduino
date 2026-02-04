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
    for (int angle = 0; angle<=180 ; angle+=10)
    {
        myservo.write(angle);
        Serial.print("Angle");
        Serial.println(angle);
        delay(50);

    }

    for (int angle = 180; angle>=0 ; angle-=10)
    {
        myservo.write(angle);
        Serial.print("Angle");
        Serial.println(angle);
        delay(50);

    }

}