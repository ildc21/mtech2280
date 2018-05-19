import processing.serial.*;  // import serial library

Serial myPort;  // Create object from Serial class
int val;

void setup() {
  size(500, 500);
  // remember to set your serial port...
  printArray(Serial.list());
  myPort = new Serial(this, Serial.list()[2], 9600);
  fill(255);
  noStroke();
  
}

void draw() {
  background(255,0,0);
  ellipse(mouseX, mouseY, 40,40);
  int posX = int(map(mouseX, 0, width, 60, 120));
  int posY = int(map(mouseY, 0, height, 120, 60));
  
  // are there available serial bytes coming in?
  while(myPort.available() > 0) {
    int inByte = myPort.read();
    println(inByte);
  }
  myPort.write(posX);
  myPort.write(posY);
  
}