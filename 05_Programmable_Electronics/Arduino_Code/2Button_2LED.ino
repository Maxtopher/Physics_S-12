
// constants won't change. They're used here to set pin numbers:
const int button1 = 2;     // the number of the pushbutton pins
const int button2 = 3;
const int ledPin1 = 8;    // the number of the LED pins
const int ledPin2 = 10;      

// variables for reading the pushbutton status
int buttonState1 = 0;         
int buttonState2 = 0;

void setup() {
  // initialize the LED pins as outputs:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  // initialize the pushbutton pisn as an input_pullup:
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
}

void loop() {
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  
  if (buttonState1 == LOW) {        //Using pullup means we have to invert HIGH/LOW for buttons
    digitalWrite(ledPin1, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
  }

  if (buttonState2 == LOW) {        //Using pullup means we have to invert HIGH/LOW for buttons
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin2, LOW);
  }
}
