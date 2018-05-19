size(500,500);

//start i at 0
//and until its more than 10,000
//draw random line
//and increment i by 1
for(int i = 0; i < 100;i++){
  float x1 = random(width);
  float y1 = random(height); 
  float x2 = x1 + 20;
  float y2 = y1 + 20;
  
  //any time you rotate, us pushMatrix
  pushMatrix();
  //define a random 360 degree
  translate(x1,y1);
  //TWO_PI is a full rotation
  rotate(random(TWO_PI));
  
   line(0,0,10,10);
   popMatrix();
}