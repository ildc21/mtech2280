
void setup(){
  size(500,500);
  noStroke();
  background(0);
  frameRate(5);
}
void draw(){
  float red = random(255);
  float blue = random(255);
  float green = random(255);
  float x = random(width);
  float y = random(height);
  fill(red,green,blue);
  ellipse(x,y,20,20);
}