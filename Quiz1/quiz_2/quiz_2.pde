float a = 470;
float b = 200;

void setup(){
  size(500,500);
  background(255);
  float x = width/2 - 15;
  float y = height/2 - 50;
  stroke(0);
  strokeWeight(15);
  noFill();
  rectMode(CENTER);
  rect(x,y,a,b);
}
void draw(){
  float line1 = width/2-15;
  float line2 = height/2- 50;
  float red = map(mouseX, 0, width, 50, 255);
  stroke(red, 0, 0);
  line(line1 - a, line2, line1 + a/2, line2);
}