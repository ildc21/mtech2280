size (500, 500);
noFill();

//if you wanted the circle to keep going multiply the width by a number
for(int i = 0; i < width * 3; i += 20){
  //top center
  ellipse(width/2, 0, i,i);
  //right center
  ellipse(width, height/2,i,i);
  //bottom center
  ellipse(width/2, height,i,i);
  //left center
  ellipse(0,height/2,i,i);
  
}