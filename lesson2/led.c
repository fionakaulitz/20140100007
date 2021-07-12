// C++ code
//
int Pin[7]={1,2,3,4,5,6,7};

unsigned char Show[9][7]=
//a b c d e f g  
{{0,0,0,0,0,0,1},
 {1,0,0,1,1,1,1},
 {0,0,1,0,0,1,0},
 {0,0,0,0,1,1,0},
 {1,0,0,1,1,0,0},
 {0,1,0,0,1,0,0},
 {0,1,0,0,0,0,0},
 {0,0,0,1,1,1,1},
 {0,0,0,0,0,0,0},
};

void setup()
{
  int i = 0;
  for (i = 1; i < 8; i ++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i,HIGH);
  }
}

void loop()
{
  int i = 0;
  int j = 0;
  for(j = 0; j < 9; j ++)
  {
  	for(i = 0; i < 9; i ++)
  	{
      digitalWrite(Pin[i], Show[j][i]);
  	}
     delay(1000);
     }
}
