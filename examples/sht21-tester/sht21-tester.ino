#include <Wire.h>
#include "SparkFun_Si7021_Breakout_Library.h"
Weather sensor; 

void setup() {
  Serial.begin(115200);
  delay(10);
  sensor.begin();
 delay(1000);
}


void loop() {
  delay(1000);
  Serial.println("Humidity: ");
  float hum = sensor.getRH();
  Serial.println(hum);
  float temp = sensor.getTemp();
  Serial.println("Temperature: ");
  Serial.println(temp);
  delay(1000);
}
