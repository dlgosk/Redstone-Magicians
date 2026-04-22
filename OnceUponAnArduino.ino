#include <Servo.h>

Servo myservo;
Servo secondServo;
Servo thirdServo;
Servo fourthServo;
Servo fifthServo;
Servo sixthServo;
const int buttonPin1 = 2; //getting wood
const int buttonPin2 = 4; //nether portal
const int buttonPin3 = 3; // piglin 
const int buttonPin4 = 5; // crafting table 
const int buttonPin5 = 6; // blaze 
const int buttonPin6 = 7; // end portal

//pin number attachment to arduino
void setup() {
  firstServo.attach(9); //getting wood servo (180)
  pinMode(buttonPin, INPUT_PULLUP);
  
  secondServo.attach(12); //nether portal servo (180)
  pinMode(buttonPin1, INPUT_PULLUP);
  
  thirdServo.attach(8); //piglin servo (180)
  pinMode(buttonPin3, INPUT_PULLUP);

  fourthServo.attach(10); //crafting servo (180)
  pinMode(buttonPin3, INPUT_PULLUP);

  fifthServo.attach(11); //blaze servo (360)
  pinMode(buttonPin3, INPUT_PULLUP);

  sixthServo.attach(13); //ender portal servo (360)
  pinMode(buttonPin3, INPUT_PULLUP);
  
}


void loop() {
  //---FIRST SERVO------
  // 180 servo; getting wood
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
  // 180 servo; nether portal
   if (digitalRead (buttonPin1) == HIGH) {
    secondServo.write(180);
  } else {
    secondServo.write(90);
  }
}

//----THIRD SERVO-------
// 180 servo; piglin trade
  if (digitalRead (buttonPin3) == HIGH) {
    thirdServo.write(180);
    delay(5000);
  } else {
    thirdServo.write(90);
  }

 //----FOURTH SERVO-----
 // 180 servo; crafting table
  if (digitalRead (buttonPin4) ==  HIGH) {
    fourthServo.write(-170);
    delay(5000);
  } else {
    fourthServo.write(90);
  }

  //-----FIFTH SERVO-----
  // 360 servo; blaze
  if (digitalRead (buttonPin5) == HIGH) {
    fifthServo.write(360);
  } else {
    fifthServo.write(90);
  }

  //-----SIXTH SERVO-----
  // 360 servo; ender portal
  if (digitalRead (buttonPin6) ==  HIGH) {
    sixthServo.write(70);
  } else {
    sixthServo.write(90);
  }

// for 180 servo, # in myservo.write() determines angle
// for 360 servo, # in myservo.write() determines speed
