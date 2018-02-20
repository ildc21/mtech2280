void setup() {
size (500,500);
  background(255);  
  strokeWeight(4);
}
void draw() {
  println(mouseX, mouseY);
  line(mouseX, mouseY,0,0);

}