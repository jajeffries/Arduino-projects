/*
 Fade
 
 This example shows how to fade an LED on pin 9
 using the analogWrite() function.
 
 This example code is in the public domain.
 
 */
const int MAX = 255;
const int MIN = 0;

const int greenLED = 6;
const int yellowLED = 9;

int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

void setup()  { 
  Serial.write("Setting up");
  // declare pin 9 to be an output:
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
} 

void loop()  { 
  Serial.write("Looping with brightness ");

  // set the brightness of pin 9:
  analogWrite(greenLED, brightness);    
  analogWrite(yellowLED, MAX - brightness);    

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == MIN || brightness == MAX) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}
