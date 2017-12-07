#define R_MOTOR_EN 7 
#define R_MOTOR_1A 6
#define R_MOTOR_2A 8
#define L_MOTOR_EN 11
#define L_MOTOR_1A 10
#define L_MOTOR_2A 9
int x;
int y;
void setup() 
{
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode (12, INPUT);
  pinMode (5, INPUT);
}

void loop() 
{

  x = digitalRead(12);
  if (x == HIGH)
  {
    digitalWrite (L_MOTOR_EN, HIGH);
    digitalWrite (L_MOTOR_1A, LOW);
    digitalWrite (L_MOTOR_2A, HIGH);
    delay(1000);
  digitalWrite (L_MOTOR_EN, HIGH);
  digitalWrite (L_MOTOR_1A, HIGH);
  digitalWrite (L_MOTOR_2A, LOW);
  digitalWrite (R_MOTOR_EN, HIGH);
  digitalWrite (R_MOTOR_1A, LOW);
  digitalWrite (R_MOTOR_2A, HIGH);
  delay(2170);
  digitalWrite (L_MOTOR_EN, HIGH);
  digitalWrite (L_MOTOR_1A, HIGH);
  digitalWrite (L_MOTOR_2A, HIGH);
  digitalWrite (R_MOTOR_EN, HIGH);
  digitalWrite (R_MOTOR_1A, HIGH);
  digitalWrite (R_MOTOR_2A, HIGH);
  delay(2170);


  }
  else
  {
    digitalWrite (L_MOTOR_EN, HIGH);
    digitalWrite (L_MOTOR_1A, HIGH);
    digitalWrite (L_MOTOR_2A, LOW);
   



  }

  y = digitalRead(5);
  if (y == HIGH)
  {
    digitalWrite (R_MOTOR_EN, HIGH);
    digitalWrite (R_MOTOR_1A, LOW);
    digitalWrite (R_MOTOR_2A, HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite (R_MOTOR_EN, HIGH);
    digitalWrite (R_MOTOR_1A, HIGH);
    digitalWrite (R_MOTOR_2A, LOW);




  }
}







