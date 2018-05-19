
void setup() {
  //sets up a didgatal pin to be used
  //as output, in this case to blink a LED
pinMode(8,OUTPUT);

}

void loop() {
  for(int i = 0; i < 200; i++){
  digitalWrite(8, HIGH);

  delay(i);
 //turns the LED off
  digitalWrite(8,LOW);
  delay(i);//waits a second
  }

}
