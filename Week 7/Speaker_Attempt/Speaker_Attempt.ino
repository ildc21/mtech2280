int led1Pin = 4;
void setup() {
  pinMode(led1Pin,OUTPUT);
}

void loop() {
  for(int i = 0; i < 100; i++){
  digitalWrite(led1Pin, HIGH);
  delayMicroseconds(2000);
  digitalWrite(led1Pin,LOW);
  delayMicroseconds(2000);
  }
  
  for(int i = 0; i < 50; i++){
  digitalWrite(led1Pin, HIGH);
  delayMicroseconds(1750);
  digitalWrite(led1Pin,LOW);
  delayMicroseconds(1750);
  }
  for(int i = 0; i < 50; i++){
  digitalWrite(led1Pin, HIGH);
  delayMicroseconds(2000);
  digitalWrite(led1Pin,LOW);
  delayMicroseconds(2000);
  }
  for(int i = 0; i < 45; i++){
  digitalWrite(led1Pin, HIGH);
  delayMicroseconds(2500);
  digitalWrite(led1Pin,LOW);
  delayMicroseconds(2500);
  }
  for(int i = 0; i < 35; i++){
  digitalWrite(led1Pin, HIGH);
  delayMicroseconds(3000);
  digitalWrite(led1Pin,LOW);
  delayMicroseconds(3000);
  }
  for(int i = 0; i < 35; i++){
  digitalWrite(led1Pin, HIGH);
  delayMicroseconds(3500);
  digitalWrite(led1Pin,LOW);
  delayMicroseconds(3500);
  }
  for(int i = 0; i < 25; i++){
  digitalWrite(led1Pin, HIGH);
  delayMicroseconds(4000);
  digitalWrite(led1Pin,LOW);
  delayMicroseconds(4000);
  }

}

