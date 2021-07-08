int button1 = 2;
int button2 = 3;
int ledPin1 = 10;
int ledPin2 = 11;
int sensorPin = A0;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  //sensorValue = analogRead(sensorPin);
  sensorValue = map(analogRead(sensorPin), 0, 1023, 1, 15);

  if (digitalRead(button1) == LOW) {
    if (digitalRead(button2) == HIGH){
      for (int i = 255; i >= 0; i--) {
        analogWrite(ledPin1, i);
        delay(sensorValue);
      } 
    }
  }
  if (digitalRead(button1) == HIGH && digitalRead(button2) == LOW) {
    for (int i = 255; i >= 0; i--) {
      analogWrite(ledPin2, i);
      delay(sensorValue);
    }
  }
  Serial.println(sensorValue);
}
