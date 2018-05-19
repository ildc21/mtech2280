#include <Software.Serial.h>

//which pins for RX and Tx on arduino?
//The Rx goes in the Tx slot and vise versa
int rxPin 3;
int txPin 2;

//it needs a name (bluetooth) and two arguments (rxPin and txPin)
SoftwareSerial bluetooth(rxPin, txPin); //RX, TX

//store incoming data
int inByte = 0;

void setup() {
//set up both serials 
Serial.begin(9600);
bluetooth.begin(9600);
}

void loop() {
  while (bluetooth.available()){
    inByte = bluetooth.read();
    Serial.println(inByte);
  }
  while (Serial.available()){
    inByte = Serial.read();
    //blueooth.println(inByte);
  }
  digitalWrite(13, HIGH);
  delay(inByte);
  digitalWrite(13,LOW);
  delay(inByte);

}
