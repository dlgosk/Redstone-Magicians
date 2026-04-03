#include <Servo.h>

Servo myservo;
const int buttonPin = 2;

void setup() {
  myservo.attach(9);
  pinMode(buttonPin, INPUT_PULLUP);
  
}

void loop() {
  if (digitalRead (buttonPin) == HIGH) {
    myservo.write(180);
  } else{
    myservo.write(90);
  }
}

 //  for(int i = 0; i  < 5; i++){
  //   myservo.write(180);
  //   delay(100);
  //   myservo.write(0);
  //   delay(100);
  // }

