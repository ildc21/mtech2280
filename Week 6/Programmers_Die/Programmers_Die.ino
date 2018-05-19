// which digital pins are the LEDs on
//a array is a collection of variables

int led1Pin = 5;
int led2Pin = 6;
int led3Pin = 7;
int led4Pin = 8;
int led5Pin = 9;

int ledPin[] = {5,6,7,8,9};

void setup() {
 //set up all LED pins to output mode
   for(int i = 0; i < 5; i++){
    pinMode(ledPin[i],OUTPUT);
  }

  pinMode(led1Pin, OUTPUT);

}

void loop() {
  for(int i = 0; i < 5; i++){
    digitalWrite(ledPin[i],LOW);
  }
  for(int i = 0; i < 5; i++){
    digitalWrite(ledPin[i],HIGH);
    delay(1000);
}

}

