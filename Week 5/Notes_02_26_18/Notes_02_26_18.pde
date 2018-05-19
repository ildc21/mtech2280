size(500,500);

//loop to the edge
//1st Step. int i = 0, will only happen one time. This is called the initialization
//2nd Step. i < width will be the condition. 
//3rd Step. then it will do what ever is in the curly bracese
//4th Step. i++ is the incrimentation. Change i++ to i = i + 15 to get individual lines
for(int i = 0; i < width; i++) {
  stroke(i,0,0);
  line(i, 0, i, height);
  
  println(i);
  
}