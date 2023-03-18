#define Motor11 7 
#define Motor12 6
#define Motor21 9
#define Motor22 8
#define PWMotor1 5
#define PWMotor2 10

int valuePWM1 = 120;
int valuePWM2 = 150;
 
void setup() {
  pinMode(Motor11, OUTPUT);
  pinMode(Motor12, OUTPUT);
  pinMode(Motor21, OUTPUT);
  pinMode(Motor22, OUTPUT);
  pinMode(PWMotor1, OUTPUT);
  pinMode(PWMotor2, OUTPUT);

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop() {
  int leftSensor = analogRead(A0);
  int rightSensor = analogRead(A1);

  if(rightSensor < 36 && leftSensor < 36) {
    digitalWrite(Motor11, HIGH);
    digitalWrite(Motor12, LOW);
    digitalWrite(Motor21, HIGH);
    digitalWrite(Motor22, LOW);
    analogWrite(PWMotor1, valuePWM1);
    analogWrite(PWMotor2, valuePWM1);
  }
    else if(rightSensor > 36 && leftSensor < 36) {
    digitalWrite(Motor11, LOW);
    digitalWrite(Motor12, HIGH);
    digitalWrite(Motor21, HIGH);
    digitalWrite(Motor22, LOW);
    analogWrite(PWMotor1, valuePWM1);
    analogWrite(PWMotor2, valuePWM1);
  }
     else if(rightSensor < 36 && leftSensor > 35) {
    digitalWrite(Motor11, HIGH);
    digitalWrite(Motor12, LOW);
    digitalWrite(Motor21, LOW);
    digitalWrite(Motor22, HIGH);
    analogWrite(PWMotor1, valuePWM1);
    analogWrite(PWMotor2, valuePWM1);
  }
       else if(rightSensor < 36 && leftSensor > 35) {
    digitalWrite(Motor11, LOW);
    digitalWrite(Motor12, LOW);
    digitalWrite(Motor21, LOW);
    digitalWrite(Motor22, LOW);
    delay(100000);
    Serial.println("Program Stopped.");
  }
}
