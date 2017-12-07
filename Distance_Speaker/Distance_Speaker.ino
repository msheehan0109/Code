#include <SPI.h>
#include <Adafruit_VS1053.h>
#include <SD.h>
int z = 0;
int val;
#include "Adafruit_VL53L0X.h"
Adafruit_VL53L0X lox = Adafruit_VL53L0X();
#define BREAKOUT_RESET  9
#define BREAKOUT_CS     10
#define BREAKOUT_DCS    8
#define SHIELD_RESET  -1
#define SHIELD_CS     7
#define SHIELD_DCS    6
#define CARDCS 4
#define DREQ 3
Adafruit_VS1053_FilePlayer musicPlayer =
  Adafruit_VS1053_FilePlayer(BREAKOUT_RESET, BREAKOUT_CS, BREAKOUT_DCS, DREQ, CARDCS);
void setup() {
  while (! Serial) {
    delay(1);
  }
  lox.begin
  
//  Serial.begin(9600);
  if (!SD.begin(CARDCS)) {
    while (1);  // don't do anything more
  }
  musicPlayer.setVolume(20, 20);
  musicPlayer.useInterrupt(VS1053_FILEPLAYER_PIN_INT);
  musicPlayer.playFullFile("track001.mp3");
  musicPlayer.startPlayingFile("track002.mp3");
}
void loop() {
  VL53L0X_RangingMeasurementData_t measure;

  lox.rangingTest(&measure, false);

  if (measure.RangeStatus != 4) {
  } else {
  }

  if (musicPlayer.stopped()) {
    while (1) {
      delay(10);
    }
  }
  if (Serial.available()) {
    char c = Serial.read();
    if (c == 's') {
      musicPlayer.stopPlaying();
    }
    if (c == 'p') {
      if (! musicPlayer.paused()) {
        musicPlayer.pausePlaying(true);
      } else {
        musicPlayer.pausePlaying(false);
      }
    }
  }
  z = measure.RangeMilliMeter;
  //int val = analogRead(4);
  //  val = map(z, 100, 450, 2, 16);
  //  musicPlayer.setVolume(val, val);

  if ((z < val) and (z > 20))
    musicPlayer.setVolume(val, val);
  else
    musicPlayer.setVolume(16, 16);

  if ((z < 400) and (z > 20))
    musicPlayer.setVolume(14, 14);
  else
    musicPlayer.setVolume(16, 16);
  if ((z < 350) and (z > 20))
    musicPlayer.setVolume(12, 12);
  else
    musicPlayer.setVolume(16, 16);
  if ((z < 300) and (z > 20))
    musicPlayer.setVolume(10, 10);
  else
    musicPlayer.setVolume(16, 16);
  if ((z < 250) and (z > 20))
    musicPlayer.setVolume(8, 8);
  else
    musicPlayer.setVolume(16, 16);
  if ((z < 200) and (z > 20))
    musicPlayer.setVolume(6, 6);
  else
    musicPlayer.setVolume(16, 16);
  if ((z < 150) and (z > 20))
    musicPlayer.setVolume(4, 4);
  else
    musicPlayer.setVolume(16, 16);
  if ((z < 100) and (z > 20))
    musicPlayer.setVolume(2, 2);
  else
    musicPlayer.setVolume(16, 16);

}



