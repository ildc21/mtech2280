 int ledPin = 4;
void setup() {
 Serial.begin(9600);
 pinMode(ledPin, INPUT);
 

}

void loop() {

  int x = digitalRead(ledPin);
  Serial.println("The led has blinked");
  Serial.println(x);
  delay(1);
 
  digitalWrite(ledPin, HIGH);
  delay (400);
  digitalWrite(ledPin, LOW);
  delay(400);
 

}
