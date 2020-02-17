// This is code that is not meant to be used - the conditions must be changed in this instance. It is just meant for experimenting with the syntax of C used in Arduino.

const int inputPin1 = 1; // Go straight
const int inputPin2 = 2; // Go left
const int inputPin3 = 3; // Go right
const int outputPin1 = 4; // Left motor
const int outputPin2 = 5; // Right motor
const int highPin = 6;

int inpState1 = 0;
int inpState2 = 0;
int inpState3 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin1, INPUT);
  pinMode(inputPin2, INPUT);
  pinMode(inputPin3, INPUT);
  pinMode(highPin, OUTPUT);
  pinMode(outputPin1, OUTPUT);
  pinMode(outputPin2, OUTPUT);
}

void loop() {
  inpState1 = digitalRead(inputPin1);
  inpState2 = digitalRead(inputPin2);
  inpState3 = digitalRead(inputPin3);
  digitalWrite(highPin, HIGH);
  
  // put your main code here, to run repeatedly:
  if (inpState1 == HIGH || inpState3 == HIGH) {
    digitalWrite(outputPin1, HIGH);
  }
  else {
    digitalWrite(outputPin1, LOW);
  }

  if (inpState1 == HIGH || inpState2 == HIGH) {
    digitalWrite(outputPin2, HIGH);
  }
  else {
    digitalWrite(outputPin2, LOW);
  }

  
}

// Siti added something.. which is this comment lol
