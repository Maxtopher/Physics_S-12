class ButtonLED
{
    // Class Member Variables
    // These are initialized at startup
    int ledPin;      // the number of the LED pin
    int buttonPin;   // number of button pin

    // These maintain the current state
    int ledState;                   // ledState used to set the LED
    int buttonState;                 // state of button

    // Constructor -
  public:
    ButtonLED(int Bpin, int Lpin)
    {
      buttonPin = Bpin;
      pinMode(buttonPin, INPUT_PULLUP);

      ledPin = Lpin;
      pinMode(ledPin, OUTPUT);
    }

    void Update()
    {
      buttonState = digitalRead(buttonPin);

      if (buttonState == LOW) {        //Using pullup means we have to invert HIGH/LOW for buttons
        digitalWrite(ledPin, HIGH);
      } else {
        digitalWrite(ledPin, LOW);
      }
    }
};

ButtonLED led1(2, 4);
ButtonLED led2(1, 5);
ButtonLED led3(3, 6);
ButtonLED led4(12, 7);
ButtonLED led5(13, 8);

void setup()
{
}

void loop()
{
  led1.Update();
  led2.Update();
  led3.Update();
  led4.Update();
  led5.Update();
}
