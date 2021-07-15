#include <CapacitiveSensor.h>

CapacitiveSensor Sensor1 = CapacitiveSensor(7,5);  //7 is charge pin.  5 is sense pin.
//CapacitiveSensor Sensor2 = CapacitiveSensor(6,4);  //7 is charge pin.  5 is sense pin.
const int BLUE = 3;
const int RED = 8;

void setup() {
  Serial.begin(9600);
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  long sensorValue = Sensor1.capacitiveSensor(1000);
  int ValueB = map(sensorValue, 0, 20000, 0, 1023);
  int ValueR = map(ValueB, 0, 1023, 1023, 0);
  Serial.println(sensorValue);
  //analogWrite(BLUE, ValueB);
  if(sensorValue > 1000) {    
    analogWrite(BLUE, ValueB);
    analogWrite(RED, 0);
  } else {
    analogWrite(BLUE, 0);
    analogWrite(RED, ValueR);
  }
}
