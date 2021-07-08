int buttonPin = 2;
int ledPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin) == LOW) {
    for(int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);
    delay(10);
    }
  }
}
