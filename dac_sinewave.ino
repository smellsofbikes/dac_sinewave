void setup() {
  // put your setup code here, to run once:
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(41, OUTPUT);
  
}

void loop() {
  int a;
  static int sinewave[] = {0,6,12,19,25,31,37,43,49,55,61,66,72,77,82,87,91,96,100,104,107,111,114,116,119,121,123,124,126,127,127,127,127,127,127};
    
  for (a=0; a<35; a++)
  {
    PORTA = 128+sinewave[a];
    PORTC = 128-sinewave[a];
  }
  for (a=34; a>-1; a--)
  {
    PORTA = 128+sinewave[a];
    PORTC = 128-sinewave[a];
  }
  for (a=0; a<35; a++)
  {
    PORTA = 128-sinewave[a];
    PORTC = 128+sinewave[a];
  }
  for (a=34; a>-1; a--)
  {
    PORTA = 128-sinewave[a];
    PORTC = 128+sinewave[a];
  }
}
