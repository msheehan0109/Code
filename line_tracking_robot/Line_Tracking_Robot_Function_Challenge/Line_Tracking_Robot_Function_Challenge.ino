#define R_MOTOR_EN 7 
#define R_MOTOR_1A 6
#define R_MOTOR_2A 8

#define L_MOTOR_EN 9
#define L_MOTOR_1A 11
#define L_MOTOR_2A 10

void setup() 
{
  pinMode (7, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
}

void loop() 
{
  forward();
  delay(2000);
  reverse();
  delay(2000);

}






void forward ()
{

  digitalWrite (R_MOTOR_EN, HIGH);
  digitalWrite (R_MOTOR_1A, HIGH);
  digitalWrite (R_MOTOR_2A, LOW);

  digitalWrite (L_MOTOR_EN, HIGH);
  digitalWrite (L_MOTOR_1A, HIGH);
  digitalWrite (L_MOTOR_2A, LOW);




}

void reverse ()
{


  digitalWrite (R_MOTOR_EN, HIGH);
  digitalWrite (R_MOTOR_1A, LOW);
  digitalWrite (R_MOTOR_2A, HIGH);

  digitalWrite (L_MOTOR_EN, HIGH);
  digitalWrite (L_MOTOR_1A, LOW);
  digitalWrite (L_MOTOR_2A, HIGH);

}


