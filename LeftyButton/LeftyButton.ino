#include <Adafruit_CircuitPlayground.h>

bool leftButtonPressed;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
CircuitPlayground.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
leftButtonPressed = CircuitPlayground.leftButton();

Serial.print("Left Button:");
if (leftButtonPressed){ 
Serial.print("DOWN");
} else { 
  Serial.print("UP");
}

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

delay(2000);

CircuitPlayground.clearPixels();


// delay(1000);
Serial.println();

delay(2000);
}
