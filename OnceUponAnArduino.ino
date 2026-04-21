#include <Servo.h>

Servo myservo;
Servo secondServo;
Servo thirdServo;
Servo fourthServo;
Servo fifthServo;
Servo sixthServo;
const int buttonPin1 = 2;
const int buttonPin2 = 4;
const int buttonPin3 = 3; // piglin servo
const int buttonPin4 = 5; // crafting table 
const int buttonPin5 = 6; // blaze 
const int buttonPin6 = 7; // end portal

void setup() {
  firstServo.attach(9);
  pinMode(buttonPin, INPUT_PULLUP);
  
  secondServo.attach(12);
  pinMode(buttonPin1, INPUT_PULLUP);
  
  thirdServo.attach(8); //piglin servo
  pinMode(buttonPin3, INPUT_PULLUP);

  fourthServo.attach(10); //crafting servo
  pinMode(buttonPin3, INPUT_PULLUP);

  fifthServo.attach(11); //blaze servo
  pinMode(buttonPin3, INPUT_PULLUP);

  sixthServo.attach(13);
  pinMode(buttonPin3, INPUT_PULLUP);
  
}


void loop() {
  //---FIRST SERVO------
  // Mining tree servo; 180 servo
  if (digitalRead (buttonPin) == HIGH) {
    for (int i = 0; i < 5; i++) {
    firstServo.write(180); 
    delay(500);
    firstServo.write(0);
    delay(500);
  }
  } else{
    firstServo.write(90);
  }

  //----SECOND SERVO------
  // Nether portal servo; 360 servo
   if (digitalRead (buttonPin1) == HIGH) {
    secondServo.write(180);
  } else {
    secondServo.write(90);
  }
}

//PIGLIN SERVO (3)
  if (digitalRead (buttonPin3) == HIGH) {
    thirdServo.write(180);
    delay(5000);
  } else {
    thirdServo.write(90);
  }

 // CRAFTING SERVO (4)
  if (digitalRead (buttonPin4) ==  HIGH) {
    fourthServo.write(-170);
    delay(5000);
  } else {
    fourthServo.write(90);
  }

  //360 servo: BLAZE SERVO (5)
  if (digitalRead (buttonPin5) == HIGH) {
    fifthServo.write(360);
  } else {
    fifthServo.write(90);
  }

  //360 servo: END PORTAL (6)
  if (digitalRead (buttonPin6) ==  HIGH) {
    sixthServo.write(70);
  } else {
    sixthServo.write(90);
  }

// for 180 servo, # in myservo.write() determines angle
// for 360 servo, # in myservo.write() determines speed

