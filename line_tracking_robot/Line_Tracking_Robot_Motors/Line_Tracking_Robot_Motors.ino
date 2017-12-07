//Right Motor
//EN = 7
//1A = 6
//2A = 8

//Left Motor
//EN = 9
//1A = 11
//2A = 10


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
  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (8, LOW);
  digitalWrite (9, HIGH);
  digitalWrite (11, HIGH);
  digitalWrite (10, LOW);
  delay (4000);
  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (8, HIGH);
  delay (2100);
  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (8, LOW);
  digitalWrite (9, HIGH);
  digitalWrite (11, HIGH);
  digitalWrite (10, LOW);
  delay (3500);
  digitalWrite (7, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (8, HIGH);
  delay (2100);
  
  
}
