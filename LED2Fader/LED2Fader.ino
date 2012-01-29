

void setup()
{
  Serial.write("Setting up...");
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.write("Done!\n");
}

int opposite(int brightness)
{
  return 255 - brightness;
}

void loop()
{
  int brightness = 0;
  int fadeAmount = 5;

  analogWrite( 13, brightness );
  Serial.write("Writing brightness");
  Serial.write(brightness);
  //analogWrite( 13, opposite(brightness) );
  
  brightness += fadeAmount;
  
  if (brightness == 0 || brightness == 255 )
  {
    Serial.write("Changing direction!");
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
