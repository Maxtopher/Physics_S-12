const int A1A = 3;  // define pin 3 for A-1A
const int A1B = 4;  // define pin 4 for A-1B
const int B1A = 5;  // define pin 5 for B-1A
const int B1B = 6;  // define pin 6 for B-1B

void setup() {
  pinMode(A1A, OUTPUT); // specify these pins as outputs
  pinMode(A1B, OUTPUT);    
  pinMode(B1A, OUTPUT); 
  pinMode(B1B, OUTPUT); 
}

void loop() {
  motorA('L', 2000);  // turn left for 2 seconds
  delay(1000);      // delay for 1 second 
  motorB('R', 2000);  // turn right for 2 seconds
  delay(1000);      // delay for 1 second
  }

/*Motor A Function*/
void motorA(char d, int t) {
  if(d =='R'){
      analogWrite(A1A, 50); 
      digitalWrite(A1B, HIGH); 
    } else if (d =='L'){
      analogWrite(A1A, 50); 
      digitalWrite(A1B, LOW);
    }

      delay(t); // allow motor to run for specified time
 
      analogWrite(A1A, 0); // turn motor OFF
      digitalWrite(A1A, LOW);;   
}
      
/*Motor B Function*/
void motorB(char d, int t) {
  if(d =='R'){
      analogWrite(B1A, 50); 
      digitalWrite(B1B, HIGH); 
    } else if (d =='L'){
      analogWrite(B1A, 50); 
      digitalWrite(B1B, LOW);    
    }
      
      delay(t); // allow motor to run for specified time 

      analogWrite(B1A, 0); // turn motor OFF
      digitalWrite(B1B, LOW);;
}
                
