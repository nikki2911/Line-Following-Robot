//L293D
//Right Motor A
const int motorPin1  = 5;  
const int motorPin2  = 6; 
//Left Motor B
const int motorPin3  = 10;
const int motorPin4  = 9;  

// IR sensor
unsigned int IRpin = 2;
unsigned int IRpin_left = 4;
unsigned int IRpin_right = 3;


void setup(){
 
    //Set pins as outputs
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, OUTPUT);
    pinMode(IRpin, INPUT_PULLUP);
    pinMode(IRpin_left, INPUT_PULLUP);
    pinMode(IRpin_right, INPUT_PULLUP);
    
}

void forward() {
    //This code  will turn Motor clockwise
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
}

void backward() {
     //This code will turn Motor counter-clockwise
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
}

void right() {
     //This code will turn Motor right
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
}

void left() {
     //This code will turn Motor left
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
}

void stop() {
     //This code will stop Motor
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
}

void loop(){
  

  if((digitalRead(IRpin) == HIGH) && (digitalRead(IRpin_left) == LOW) && (digitalRead(IRpin_right) == LOW))       
  // if middle irsensor detects black line 
  {
    forward();
  }

  else if((digitalRead(IRpin_left) == LOW) && (digitalRead(IRpin_right) == HIGH))       
  // if right irsensor detects black line 
  {
    right();
  }
  
  else if((digitalRead(IRpin_left) == HIGH) && (digitalRead(IRpin_right) == LOW))       
  // if left irsensor detects black line 
  {
    left();
  } 

  else if((digitalRead(IRpin) == LOW) && (digitalRead(IRpin_left) == LOW) && (digitalRead(IRpin_right) == LOW))       
  // if irsensor detects no black line 
  {
    stop();
  }

}
