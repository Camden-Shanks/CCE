#include <Adafruit_CircuitPlayground.h>

bool slideSwitch;
bool switchOff; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
CircuitPlayground.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

  //whenever left button is pressed the lights will turn on
slideSwitch = CircuitPlayground.slideSwitch();
CircuitPlayground.clearPixels();

delay(200);
if (slideSwitch) {

//Set color of every light
CircuitPlayground.setPixelColor(0, 64, 224, 208);
CircuitPlayground.setPixelColor(1, 253, 200, 3);
CircuitPlayground.setPixelColor(2, 64, 224, 208);
CircuitPlayground.setPixelColor(3, 253, 200, 3);
CircuitPlayground.setPixelColor(4, 64, 224, 208);
CircuitPlayground.setPixelColor(5, 253, 200, 3);

CircuitPlayground.setPixelColor(6, 64, 224, 208);
CircuitPlayground.setPixelColor(7, 253, 200, 3);
CircuitPlayground.setPixelColor(8, 64, 224, 208);
CircuitPlayground.setPixelColor(9, 253, 200, 3);

} else { 

CircuitPlayground.clearPixels();
}

Serial.print("Slide Switch: ");
if (slideSwitch){ 
Serial.print("+");
} else { 
  Serial.print("-");
}

Serial.println();

delay(2000);

}
