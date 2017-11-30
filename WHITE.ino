int WHITE = 10;
int COLOR =10;
void setup() {
  // put your setup code here, to run once:
  pinMode(WHITE,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
 for(int i=1; i<150 ; i++)
 {
  analogWrite(WHITE, i);
  delay(COLOR);
  }
 
  for(int i=150; i>0 ; i--)
 {
  analogWrite(WHITE, i);
  delay(COLOR);
  }
}
