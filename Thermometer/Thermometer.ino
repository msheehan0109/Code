float x;
void setup() 
{  
  Serial.begin (9600);
}

void loop() 
{
  x=analogRead (5);
  
  Serial.println(x);
  delay(100);
  x = ((x * 9)/5) +32;
}


