int stp = 3;  //connect pin 13 to step
int dir = 2;  // connect pin 12 to dir
int stp2 = 5;  //connect pin 13 to step
int dir2 = 4;  // connect pin 12 to dir

int speedDelay = 8000;

void setup() 
{                
  pinMode(stp, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(stp2, OUTPUT);
  pinMode(dir2, OUTPUT);  
  digitalWrite(dir, HIGH);
  digitalWrite(dir2, LOW);
  delay(100);
}


void loop() 
{
    digitalWrite(stp, HIGH); 
    digitalWrite(stp, LOW);   
    delayMicroseconds(speedDelay);   
    digitalWrite(stp2, HIGH);
    digitalWrite(stp2, LOW);
    delayMicroseconds(speedDelay);       
}
