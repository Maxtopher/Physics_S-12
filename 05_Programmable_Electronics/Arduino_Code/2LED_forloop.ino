//2 LEDs using a nested for() loop
//One toggles every second, the other every minute
int ledPinMinute = 10;
int ledPinSecond = 11;
bool minuteState = true;
bool secondState = true;

void setup() {
  // put your setup code here, to run once:
  digitalWrite(ledPinMinute, minuteState);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int m = 0; m <= 60; m++){
    for (int s = 0; s <= 60; s++) {
      digitalWrite(ledPinSecond, secondState);
      delay(1000);
      secondState = !secondState;
      Serial.println(secondState);
    }
    digitalWrite(ledPinMinute, minuteState);
    minuteState = !minuteState;
  }
  
}
