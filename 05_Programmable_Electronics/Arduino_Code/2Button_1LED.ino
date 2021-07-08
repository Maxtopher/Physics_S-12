int button1 = 2; //variables store pin button is attached to
int button2 = 3;
int LED = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button1State = digitalRead(2);
  int button2State = digitalRead(3);

  //Serial.print("Button 1 =");
  //Serial.println(button1State);

  if (button1State == LOW && button2State == LOW){
    analogWrite(LED, 150);
  } else {
    analogWrite(LED, 0);
  }
}
