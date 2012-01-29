#include <Vector.h>

Vector<int> myVec;

void setup()
{
  myVec.push_back(1);
  myVec.push_back(2);
  myVec.push_back(3);
  Serial.write(myVec.size());
}

void loop()
{

}

