#include <Servo.h>

Servo servoX;  // create servo object to control an X axis servo
Servo servoY;  // and for Y

// (a maximum of eight servo objects can be created!)
int potPin = 1;
int servoPin1 = 9;
int val = 0;
int servoXPin = 10;  // what pins are our servos connected to?
int servoYPin = 11;

int posX = 0;    // variable to store the servo position
int posY = 0;    // variable to store the other servo position

void setup() {
  pinMode(servoPin1, OUTPUT);
  Serial.begin(9600);  // we're gonna use serial comm.

  // "attach" servos
  servoY.attach(servoXPin);  // attaches the servo on pin 10 to the servo object
  servoX.attach(servoYPin);  // attaches the servo on pin 11 to the servo object
}

void loop() {
  val = analogRead(1);
  digitalWrite(servoPin1, HIGH);
  delay(val);
  digitalWrite(servoPin1, LOW);
  delay(val);
  // see if there is available serial data
  if (Serial.available() > 1) {

    // read the incoming bytes
    posX = Serial.read();
    posY = Serial.read();
  }

  // "write" for a servo motor just tells it what angle to go to
  servoX.write(posX);
  servoY.write(posY);

}
