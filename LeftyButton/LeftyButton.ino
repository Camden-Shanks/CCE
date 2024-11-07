#include <Adafruit_CircuitPlayground.h>

bool slideSwitch;
float soundLevel; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
CircuitPlayground.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
soundLevel = CircuitPlayground.mic.soundPressureLevel(10);
//insert Sound Pressure level
Serial.print("Sound Sensor SPL:");
Serial.println(soundLevel);

//When sound sensor activates, Purple LEDs will react to sound causing intense flickering
if (soundLevel > 50) { 
for (int i = 0; i < 10; i++) { 
  CircuitPlayground.setPixelColor(i, 121, 3, 253);
}
} else {
CircuitPlayground.clearPixels();
}

//whenever left button is pressed the lights will turn on
slideSwitch = CircuitPlayground.slideSwitch();

Serial.print("Slide Switch: ");
  if (slideSwitch) {
    Serial.print("+"); //Slide switch is on
  } else {
    Serial.print("-"); //Slide switch is off to 'sound mode'
  }

if (slideSwitch) {
//Set color of every light, mainly blue and yellow to symbolize calm silence
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
//when the switch is turned, all LEDs turn into the colors above
  CircuitPlayground.clearPixels();
}
delay(100);

}
