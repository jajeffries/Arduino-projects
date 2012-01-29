/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(11, OUTPUT); 
  pinMode(12, OUTPUT);  
  pinMode(13, OUTPUT);

  Serial.begin(9600);
  Serial.write("HELLO WORLD!");
}

void loop() {
  digitalWrite(12, HIGH);   // set the LED on
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  delay(1000);              // wait for a second
  digitalWrite(12, LOW);    // set the LED off
  digitalWrite(13, HIGH); 
  digitalWrite(11, LOW);
  delay(1000);    
  digitalWrite(12, LOW);    // set the LED off
  digitalWrite(13, LOW); 
  digitalWrite(11, HIGH);
  delay(1000);
}
