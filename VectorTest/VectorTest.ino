#include <Vector.h>

Vector<int> myVec;

void setup()
{
  Serial.begin(9600);
  myVec.push_back(1);
  myVec.push_back(2);
  myVec.push_back(3);
  
  char myChars[10];
  sprintf(myChars, "%d", myVec.size());
  Serial.write(myChars);
}

void loop()
{
  
}

