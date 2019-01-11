#define row1 9
#define row2 10
#define row3 11
#define row4 12
#define row5 13
String incomming = "";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(0,OUTPUT);//reset pin
  pinMode(1,OUTPUT);//pulse pin
  pinMode(row1,OUTPUT);
  pinMode(row2,OUTPUT);
  pinMode(row3,OUTPUT);
  pinMode(row4,OUTPUT);
  pinMode(row5,OUTPUT);
}

void loop() 
{
  if(Serial.available()>0)
  {
    incomming = Serial.readString();
    Serial.print("Outputting: ");Serial.println(incomming);
    displayString(incomming);
  }
}

void displayString(String str)
{
  char curChar;
  for(int i=0; i<=str.length();i++)
  {
    curChar = str.charAt(i);
    if(curChar!=(char) 0)
    {
      displayLetter(curChar);
    }
    pause();
  }
}

void displayLetter(char letter)
{
  uint32_t pauseTime = 0.01 * 60000L;
  for( uint32_t tStart = millis();  (millis()-tStart) < pauseTime;  ){
    int x=0;
    while(x<=4)
    {
      switch(letter){
        case 'a':
          letterA(x);
          break;
        case 'b':
          letterB(x);
          break;
        case 'c':
          letterC(x);
          break;
        case 'd':
          letterD(x);
          break;
        case 'e':
          letterE(x);
          break; 
        case 'f':
          letterF(x);
          break;
        case 'g':
          letterG(x);
          break;
        case 'h':
          letterH(x);
          break;
        case 'i':
          letterI(x);
          break;
        case 'j':
          letterJ(x);
          break;
        case 'k':
          letterK(x);
          break;
        case 'l':
          letterL(x);
          break;
        case 'm':
          letterM(x);
          break;
        case 'n':
          letterN(x);
          break;
        case 'o':
          letterO(x);
          break;
        case 'p':
          letterP(x);
          break;
        case 'q':
          letterQ(x);
          break;
        case 'r':
          letterR(x);
          break;
        case 's':
          letterS(x);
          break;
        case 't':
          letterT(x);
          break;
        case 'u':
          letterU(x);
          break;
        case 'v':
          letterV(x);
          break;
        case 'w':
          letterW(x);
          break;
        case 'x':
          letterX(x);
          break;
        case 'y':
          letterY(x);
          break;
        case 'z':
          letterZ(x);
          break;
        default:
          return;
          break;
      }
      digitalWrite(row1, LOW);
      digitalWrite(row2, LOW);
      digitalWrite(row3, LOW);
      digitalWrite(row4, LOW);
      digitalWrite(row5, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(1, LOW);
      delay(1);
      x++;
    }
    digitalWrite(0, HIGH);
    digitalWrite(0, LOW);
    delay(1); 
  }
}

void letterA(int x)
{
  switch(x){
    case 0:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 2:
      digitalWrite(row3, HIGH);
      digitalWrite(row5, HIGH);
      break;
    case 3:
      digitalWrite(row3, HIGH);
      digitalWrite(row5, HIGH);
      break;
    case 4:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
  }
}

void letterB(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 2:
      digitalWrite(row3, HIGH);
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row3, HIGH);
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 4:
      digitalWrite(row4, HIGH);
      digitalWrite(row2, HIGH);
      break;
  }
}

void letterC(int x)
{
  switch(x){
    case 0:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
  }
}

void letterD(int x)
{
  switch(x){
    case 0:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 4:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
  }
}

void letterE(int x)
{
  switch(x){
    case 0:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row1, HIGH);
      break;
  }
}

void letterF(int x)
{
  switch(x){
    case 0:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      break;
  }
}

void letterG(int x)
{
  switch(x){
    case 0:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      digitalWrite(row3, HIGH);
      break;
  }
}

void letterH(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row3, HIGH);
      break;
    case 2:
      digitalWrite(row3, HIGH);
      break;
    case 3:
      digitalWrite(row3, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
  }
}

void letterI(int x)
{
  switch(x){
    case 0:
      break;
    case 1:
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 3:
      break;
    case 4:
      break;
  }
}

void letterJ(int x)
{
  switch(x){
    case 0:
      digitalWrite(row2, HIGH);
      break;
    case 1:
      digitalWrite(row1, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
  }
}

void letterK(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row3, HIGH);
      break;
    case 2:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 4:
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
  }
}

void letterL(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row1, HIGH);
      break;
    case 2:
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row1, HIGH);
      break;
    case 4:
      digitalWrite(row1, HIGH);
      break;
  }
}

void letterM(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row4, HIGH);
      break;
    case 2:
      digitalWrite(row3, HIGH);
      break;
    case 3:
      digitalWrite(row4, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
  }
}

void letterN(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      break;
    case 2:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
    case 3:
      digitalWrite(row1, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
  }
}

void letterO(int x)
{
  switch(x){
    case 0:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 4:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
  }
}

void letterP(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 4:
      digitalWrite(row4, HIGH);
      break;
  }
}

void letterQ(int x)
{
  switch(x){
    case 0:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 4:
      digitalWrite(row1, HIGH);
      break;
  }
}

void letterR(int x)
{
  switch(x){
    case 0:
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
    case 4:
      digitalWrite(row4, HIGH);
      digitalWrite(row1, HIGH);
      break;
  }
}

void letterS(int x)
{
  switch(x){
    case 0:
      digitalWrite(row4, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row2, HIGH);
      break;
  }
}

void letterT(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      break;
  }
}

void letterU(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
    case 1:
      digitalWrite(row1, HIGH);
      break;
    case 2:
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row1, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
  }
}

void letterV(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      break;
    case 1:
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
    case 2:
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      break;
  }
}

void letterW(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row2, HIGH);
      break;
    case 2:
      digitalWrite(row3, HIGH);
      break;
    case 3:
      digitalWrite(row2, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
  }
}

void letterX(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 1:
      digitalWrite(row4, HIGH);
      digitalWrite(row2, HIGH);
      break;
    case 2:
      digitalWrite(row3, HIGH);
      break;
    case 3:
      digitalWrite(row4, HIGH);
      digitalWrite(row2, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      break;
  }
}

void letterY(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      break;
    case 1:
      digitalWrite(row3, HIGH);
      break;
    case 2:
      digitalWrite(row3, HIGH);
      digitalWrite(row2, HIGH);
      digitalWrite(row1, HIGH);
      break;
    case 3:
      digitalWrite(row3, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row4, HIGH);
      break;
  }
}

void letterZ(int x)
{
  switch(x){
    case 0:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      digitalWrite(row2, HIGH);
      break;
    case 1:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 2:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 3:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      digitalWrite(row3, HIGH);
      break;
    case 4:
      digitalWrite(row5, HIGH);
      digitalWrite(row1, HIGH);
      digitalWrite(row4, HIGH);
      break;
  }
}

void pause()
{
  uint32_t pauseTime = 0.005 * 60000L;
  for( uint32_t tStart = millis();  (millis()-tStart) < pauseTime;  ){
    int x=0;
    while(x<=4)
    {
      switch(x){
        case 0:
          break;
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          break;
        
      }
      digitalWrite(row1, LOW);
      digitalWrite(row2, LOW);
      digitalWrite(row3, LOW);
      digitalWrite(row4, LOW);
      digitalWrite(row5, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(1, LOW);
      delay(1);
      x++;
    }
    digitalWrite(0, HIGH);
    digitalWrite(0, LOW);
    delay(1); 
  }
}
