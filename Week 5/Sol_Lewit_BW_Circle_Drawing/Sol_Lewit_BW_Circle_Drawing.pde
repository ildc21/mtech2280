size(500,500);
noFill();
strokeWeight(5);
background(255,255,255);

for(int i = 0; i < width*3;i +=20){
  ellipse(0,height/2,i,i);
}