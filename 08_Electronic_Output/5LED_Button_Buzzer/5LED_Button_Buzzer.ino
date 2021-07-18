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
        while ((millis() - startTime) < 5) {
          digitalWrite(buzzerPin, HIGH);
          delayMicroseconds(period / 2);
          digitalWrite(buzzerPin, LOW);
          delayMicroseconds(period / 2);
        }
      }
    }5LED
};

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

ButtonBuzzer Buzz1(2, 0, 261.63);   //Middle C
ButtonBuzzer Buzz2(1, 0, 293.66);   //D
ButtonBuzzer Buzz3(3, 0, 329.63);   //E
ButtonBuzzer Buzz4(12, 0, 349.23);  //F
ButtonBuzzer Buzz5(13, 0, 392.00); //G
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
  Buzz1.Update();
  Buzz2.Update();
  Buzz3.Update();
  Buzz4.Update();
  Buzz5.Update();
  led1.Update();
  led2.Update();
  led3.Update();
  led4.Update();
  led5.Update();
}
