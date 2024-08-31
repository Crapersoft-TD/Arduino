//PULL UP 

int buttonPin = 7;
int ledPin = 11;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
  }

  if (buttonState == HIGH) {
    digitalWrite(ledPin, LOW);
  }
}
