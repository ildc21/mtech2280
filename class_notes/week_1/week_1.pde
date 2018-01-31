//the size of the function creates a window
//that is width, hight pixels big
size(500,500);

//changes the color of the background
background(255,0,0);

//the fill crates a color to fill in what ever shape that you create
//it goes off off red, blue, and green
//255 is the max amout of pixels that a indavidual color can have
fill(255,225,0);

//stroke is ment to change the color of the border
stroke(255,255,255);

//size of the border
strokeWeight(5);

//not putting a border on the following shapes
noStroke();

//the rect creates a small square on the screen
//the first two numbers is the number of pixels away from the screen the square should be
//the last two numbers are the width and hight
rect(10,40,60,60);

//circle, the first two numbers detirmine where the circles center will be put
//the last two numbers represent the diametere width and diameter hight
ellipse(222,222,100,100);

//draw the line from x1, y1, x2,y2
line(222,222,500,0);