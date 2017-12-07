#define Sensor 3
#define Sensor2 12

int x;
//x = sensor 1

int y;
//y = sensor 2

int MotorLF = 9          ;
int MotorLB = 10;
int MotorRF = 5;
int MotorRB = 6;

void setup()

{
  pinMode(1, INPUT);
  pinMode(3, INPUT);
  pinMode(12, INPUT);
  Serial.begin(9600);
  pinMode(MotorLF, OUTPUT);
  pinMode(MotorLB, OUTPUT);
  pinMode(MotorRF, OUTPUT);
  pinMode(MotorRB, OUTPUT);
}

void loop()

{
  x = digitalRead(11);
  y = digitalRead(12);

  //FORWARD

  if ((x == LOW) and (y == LOW))
  {
    Serial.print ("FORWARD");
    Serial.println();
    digitalWrite (MotorLF, HIGH);
    digitalWrite (MotorLB, LOW);
    digitalWrite (MotorRF, HIGH);
    digitalWrite (MotorRB, LOW);
    delay(50);
  }

  //BACKWARDS

  if  ((x == HIGH) and (y == HIGH))
  {
    Serial.print("BACKWARDS");
    Serial.println();
    digitalWrite (MotorLF, LOW);
    digitalWrite (MotorLB, HIGH);
    digitalWrite (MotorRF, LOW);
    digitalWrite (MotorRB, HIGH);
    delay(50);
  }
  
  //RIGHT

  if ((x == HIGH) and (y == LOW))
  {
    Serial.print("RIGHT");
    Serial.println();
    digitalWrite (MotorLF, LOW);
    digitalWrite (MotorLB, LOW);
    digitalWrite (MotorRF, HIGH);
    digitalWrite (MotorRB, LOW);
    delay(50);
  }
  //LEFT

  if ((x == LOW) and (y == HIGH))
  {
    Serial.print("LEFT");
    Serial.println();
    digitalWrite (MotorLF, HIGH);
    digitalWrite (MotorLB, LOW);
    digitalWrite (MotorRF, LOW);
    digitalWrite (MotorRB, LOW);
    delay(50);
    
  }
  
}
