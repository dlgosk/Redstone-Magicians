#include <Servo.h>

Servo myservo;
Servo secondServo;
const int buttonPin = 2;
const int buttonPin = 4;

void setup() {
  myservo.attach(9);
  pinMode(buttonPin, INPUT_PULLUP);
  secondServo.attach(12);
  pinMode(buttonPin1, INPUT_PULLUP);
  
}


void loop() {
  //---FIRST SERVO------
  // Mining tree servo; 180 servo
  if (digitalRead (buttonPin) == HIGH) {
    for (int i = 0; i < 5; i++) {
    myservo.write(180); 
    delay(500);
    myservo.write(0);
    delay(500);
  }
  } else{
    myservo.write(90);
  }

  //----SECOND SERVO------
  // Nether portal servo; 360 servo
   if (digitalRead (buttonPin1) == HIGH) {
    secondServo.write(180);
  } else {
    secondServo.write(90);
  }
}

// for 180 servo, # in myservo.write() determines angle
// for 360 servo, # in myservo.write() determines speed

