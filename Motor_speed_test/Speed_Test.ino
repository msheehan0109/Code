#define Sensor 3
int x;
int MotorLF = 9;
int MotorLB = 10;
int MotorRF = 5;
int MotorRB = 6;


void setup() {
  pinMode(1, INPUT);
  Serial.begin(9600);
  pinMode(MotorLF, OUTPUT);
  pinMode(MotorLB, OUTPUT);
  pinMode(MotorRF, OUTPUT);
  pinMode(MotorRB, OUTPUT);

}

void loop() {
  digitalWrite(9, HIGH);
  digitalWrite (10, LOW);
  analogWrite(9, 255);
  analogWrite(10, 0);


  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  analogWrite(5, 0);
  analogWrite(6,100);

}
