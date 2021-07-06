/*  Code to run motor in one direction based on potentiometer reading.
 *  Motor driver control on pin 3/
 *  Potentiometer plugged into A0, A2, and A4 on Metro M0 ( or similar).
 */



void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, OUTPUT);  //This will be GND for the potentiometer
  pinMode(A4, OUTPUT);  //This will be 3.3V for the pot.

  digitalWrite(A0, LOW);
  digitalWrite(A4, HIGH);

}

void loop() {
  int pot_value = analogRead(A2);   //pot wiper is on A2
  int motor_level = map(pot_value, 0, 1023, 255, 0); // map motor_level to pot_value so that zero corresponds to lowest speed.
  analogWrite(3, motor_level);
  analogWrite(5, motor_level);
  delay(1);
}
