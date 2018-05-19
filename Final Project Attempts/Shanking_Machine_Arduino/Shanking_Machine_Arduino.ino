#include <Servo.h>
 
Servo servoX;  // create servo object to control an X axis servo
Servo servoY;
Servo servoZ;

int servoXPin = 2;  // what pins are our servos connected to?
int servoYPin = 3;
int servoZpin = 4;
 
int posX = 0;    // variable to store the servo position
int posY = 0;
int posZ = 0;

int inByte = 0;


void setup() {
  Serial.begin(9600);  // we're gonna use serial comm.
 
  // "attach" servos
  servoX.attach(servoXPin);  // attaches the servo on pin 5 to the servo object
  servoY.attach(servoYPin);
  servoZ.attach(servoZpin);
}
 
void loop() {
 
  
  
while (Serial.available()){
  inByte = Serial.read();

  if (inByte == 110 ) {
  servoX.write(inByte);
  }
 if(inByte == 30){
  servoY.write(inByte);
 }
 if(inByte == 180) {
  servoZ.write(inByte);
 }
 if(inByte == 85){
  servoY.write(inByte);
 }
 if(inByte == 40){
  servoX.write(inByte);
 }
 if(inByte == 55){
  servoX.write(inByte);
 }
if(inByte == 90){
  servoX.write(inByte);
}
if(inByte == 60){
  servoZ.write(inByte);
}
if(inByte == 150){
  servoY.write(inByte);
}
}

}
