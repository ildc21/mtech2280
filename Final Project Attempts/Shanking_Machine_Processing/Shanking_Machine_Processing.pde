import processing.serial.*;  // import serial library

Serial myPort;  // Create object from Serial class

void setup() {
  size(500, 300);

  // remember to set your serial port...
  printArray(Serial.list());
  myPort = new Serial(this, Serial.list()[2], 9600);
}

void draw() {

  background(0);
  fill(255);
  // map the mouse position from 0 -> window width to a range of degrees for the servo
  // the servo can handle 180 degrees, but I think the pointer is better with a limited range
  int posX = int(map(mouseX, 0, width, 1, 255));

  if (keyPressed) {
    if (key == 'a') {
      myPort.write(110);
    }
    if (key == 's'){
     myPort.write(30); 
    }
    if (key == 'd') {
      myPort.write(180);
    }
    if (key == 'f'){
      myPort.write(85);
  }
  if(key == 'l'){
     myPort.write(40); 
  }
  if(key == 'r'){
   myPort.write(55); 
  }
  if(key == 'g'){
    myPort.write(90);
  }
   if(key == 'j'){
   myPort.write(150); 
  }
  if(key == 'h'){
   myPort.write(60); 
  }

  }
}