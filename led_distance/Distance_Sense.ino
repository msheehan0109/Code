int x;
int y;
int z = 0;
#include "Adafruit_VL53L0X.h"
Adafruit_VL53L0X lox = Adafruit_VL53L0X();
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(115200);
  // wait until serial port opens for native USB devices
  while (! Serial) {
    delay(1);
  }
  Serial.println("Adafruit VL53L0X test");
  if (!lox.begin()) {
    Serial.println(F("Failed to boot VL53L0X"));
    while (1);
  }
  // power
  Serial.println(F("VL53L0X API Simple Ranging example\n\n"));
  Serial.print(x);
}
void loop()
{
  VL53L0X_RangingMeasurementData_t measure;
  Serial.print("Reading a measurement... ");
  lox.rangingTest(&measure, false); // pass in 'true' to get debug data printout!

  if (measure.RangeStatus != 4) {  // phase failures have incorrect data
    Serial.print("Distance (mm): "); Serial.println(measure.RangeMilliMeter);
  } else {
    Serial.println(" out of range ");
  }
  if ((measure.RangeMilliMeter < 450) and (measure.RangeMilliMeter > 20))
    digitalWrite(3, HIGH);
  else
    digitalWrite(3, LOW);
  if ((measure.RangeMilliMeter < 400) and (measure.RangeMilliMeter > 20))
    digitalWrite(4, HIGH);
  else
    digitalWrite(4, LOW);
  if ((measure.RangeMilliMeter < 350) and (measure.RangeMilliMeter > 20))
    digitalWrite(5, HIGH);
  else
    digitalWrite(5, LOW);
  if ((measure.RangeMilliMeter < 300) and (measure.RangeMilliMeter > 20))
    digitalWrite(6, HIGH);
  else
    digitalWrite(6, LOW);
  if ((measure.RangeMilliMeter < 250) and (measure.RangeMilliMeter > 20))
    digitalWrite(7, HIGH);
  else
    digitalWrite(7, LOW);
  if ((measure.RangeMilliMeter < 200) and (measure.RangeMilliMeter > 20))
    digitalWrite(8, HIGH);
  else
    digitalWrite(8, LOW);
  if ((measure.RangeMilliMeter < 150) and (measure.RangeMilliMeter > 20))
    digitalWrite(9, HIGH);
  else
    digitalWrite(9, LOW); 
  if ((measure.RangeMilliMeter < 100) and (measure.RangeMilliMeter > 20))
    digitalWrite(10, HIGH);
  else
    digitalWrite(10, LOW);


  }



