#include <SoftwareSerial.h>
#include <Servo.h>
 
Servo servoX;  // create servo object to control an X axis servo
Servo servoY;
Servo servoz;

int servoXPin = 2;  // what pins are our servos connected to?
int servoYPin = 3;
int servoZPin = 4;
 
int posX = 0;    // variable to store the servo position
int posY = 0;
int posZ = 0;

int inByte = 0;
void setup() {
  Serial.begin(9600);  // we're gonna use serial comm.
 
  // "attach" servos
  servoX.attach(servoXPin);  // attaches the servo on pin 5 to the servo object
  servoY.attach(servoYPin);
  servoZ.attach(servoZPin);
}
 
void loop() {
 
  
  while(Serial.avalible()){
    inByte = Serial.read();
    

  if (Serial.available() > 1) {
 
    // read the incoming bytes
    posX = Serial.read();
    posY = Serial.read();
    posZ = Serial.read();
  }

  }
  // "write" for a servo motor just tells it what angle to go to
  servoX.write(posX);
  servoY.write(posY);
  servoZ.write(posZ);
}
