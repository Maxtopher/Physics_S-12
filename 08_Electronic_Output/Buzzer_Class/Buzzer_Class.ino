class ButtonBuzzer
{
    // Class Member Variables
    // These are initialized at startup
    int buzzerPin;      // the number of the LED pin
    int buttonPin;   // number of button pin
    int Frequency;

    // These maintain the current state
    int buttonState;                 // state of button

    // Constructor -
  public:
    ButtonBuzzer(int Buttpin, int Buzzpin, int frequency)
    {
      buttonPin = Buttpin;
      pinMode(buttonPin, INPUT_PULLUP);

      buzzerPin = Buzzpin;
      pinMode(buzzerPin, OUTPUT);

      Frequency = frequency;
    }

    void Update()
    {
      buttonState = digitalRead(buttonPin);
      int startTime = millis();
      int period = 1000000 / Frequency;

      if (buttonState == LOW) {
        while ((millis() - startTime) < 50) {
          digitalWrite(buzzerPin, HIGH);
          delayMicroseconds(period / 2);
          digitalWrite(buzzerPin, LOW);
          delayMicroseconds(period / 2);
        }
      }
    }
};

ButtonBuzzer Buzz1(2, 0, 200);
ButtonBuzzer Buzz2(1, 0, 300);
ButtonBuzzer Buzz3(3, 0, 400);
ButtonBuzzer Buzz4(12, 0, 500);
ButtonBuzzer Buzz5(13, 0, 600);

void setup()
{
}

void loop()
{
  Buzz1.Update();
  Buzz2.Update();
  Buzz3.Update();
  Buzz4.Update();
  Buzz5.Update();
}
