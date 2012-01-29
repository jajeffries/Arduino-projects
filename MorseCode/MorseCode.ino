const byte NONE = 0x0;
const byte DOT = 0x1;
const byte DASH = 0x2;

const int DOT_LENGTH = 500;
const int DASH_LENGTH = 1000;

const byte MAX_SEQ_LENGTH = 5;
byte codes[35][MAX_SEQ_LENGTH]; //35 = A-Z and 0-9

int outputPin = 13;

void setup()
{
  //fill array with a-z and 0-9 in morse code
  codes[0] = {DOT, DASH, NONE, NONE, NONE}; //A
  codes[1] = {DASH, DOT, DOT, DOT, NONE}; //B
  codes[2] = {DASH, DOT, DASH, DOT, NONE}; //C
  codes[3] = {DASH, DOT, DOT, NONE, NONE}; //D
  codes[4] = {DOT, DOT, NONE, NONE, NONE}; //E
  codes[5] = {DOT, DOT, DASH, DOT, NONE}; //F
  codes[6] = {DASH, DASH, DOT, NONE, NONE}; //G
  codes[7] = {DOT, DOT, DOT, DOT, NONE}; //H
  codes[8] = {DOT, DOT, NONE, NONE, NONE}; //I
  codes[9] = {DOT, DASH, NONE, NONE, NONE};
  codes[10] = {DOT, DASH, NONE, NONE, NONE};
  codes[11] = {DOT, DASH, NONE, NONE, NONE};
  codes[12] = {DOT, DASH, NONE, NONE, NONE};
  codes[13] = {DOT, DASH, NONE, NONE, NONE};
  codes[14] = {DOT, DASH, NONE, NONE, NONE};
  codes[15] = {DOT, DASH, NONE, NONE, NONE};
  codes[16] = {DOT, DASH, NONE, NONE, NONE};
  codes[17] = {DOT, DASH, NONE, NONE, NONE};
  codes[18] = {DOT, DASH, NONE, NONE, NONE};
  codes[19] = {DOT, DASH, NONE, NONE, NONE};
  codes[20] = {DOT, DASH, NONE, NONE, NONE};
  codes[21] = {DOT, DASH, NONE, NONE, NONE};
  codes[22] = {DOT, DASH, NONE, NONE, NONE};
  codes[23] = {DOT, DASH, NONE, NONE, NONE};
  codes[24] = {DOT, DASH, NONE, NONE, NONE};
  codes[25] = {DOT, DASH, NONE, NONE, NONE};
  codes[26] = {DOT, DASH, NONE, NONE, NONE};
  codes[27] = {DOT, DASH, NONE, NONE, NONE};
  codes[28] = {DOT, DASH, NONE, NONE, NONE};
  codes[29] = {DOT, DASH, NONE, NONE, NONE};
  codes[30] = {DOT, DASH, NONE, NONE, NONE};
  codes[31] = {DOT, DASH, NONE, NONE, NONE};
  codes[32] = {DOT, DASH, NONE, NONE, NONE};
  codes[33] = {DOT, DASH, NONE, NONE, NONE};
  codes[34] = {DOT, DASH, NONE, NONE, NONE};  
  
  pinMode(outputPin, OUTPUT);
  
  char* input = "ACE\0";
  char* c = input;
  while ( *c!= '\0' )
  {
    sendMorseChar(*c);
    delay(250);
    c++;
  }
  delay(2000);
}

void sendMorseChar(char c)
{
  for(byte i=0; i!=5; i++)
  {
    switch( codes[c -65][i] )
    {
    case DOT:
      digitalWrite(outputPin, HIGH);
      delay(DOT_LENGTH);
      digitalWrite(outputPin, LOW);
      break;
    case DASH:
      digitalWrite(outputPin, HIGH);
      delay(DASH_LENGTH);
      digitalWrite(outputPin, LOW);
      break;
    case NONE:
      break;
    }
  }
}
void loop()
{
}
