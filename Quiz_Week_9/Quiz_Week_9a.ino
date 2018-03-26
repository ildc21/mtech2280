// create an array to store the digital pin
// info for 5 LEDs
int ledPin[] = {4, 5, 6, 7};
 
 
void setup() {
 
  // enable serial (like a console)
  Serial.begin(9600);
  // hello world! print out serial
  Serial.println("Serial Ready");
 
  // generate a new random seed
  randomSeed(analogRead(0));
 
  // ...
  int rando = random(4);
  Serial.println(rando);
 
  // sets all LED pins to OUTPUT
  for(int i = 2; i < 4; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
 
  // turn them all off
  for(int i = 2; i < 4; i++) {
    digitalWrite(ledPin[i], LOW);
  }
    for(int i = 2; i < rando; i++) {
    digitalWrite(ledPin[i], HIGH);
  }
}
 
void loop() {
 
 
 
}
