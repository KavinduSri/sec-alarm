// -Kavindu Sri-
// -Kavindu Sri-

int led = 13;
int tonePin = 8;
#define trig 2
#define echo 4
void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);

  digitalWrite(trig,LOW);

  long t = pulseIn(echo,HIGH);

  long cm = t/29/2;
  if(cm < 30){
    lol();
    
  }
  
}
void lol(){
  while(true){
        digitalWrite(13,HIGH);
    delay(10);
    digitalWrite(13,LOW);
    
    tone(tonePin, 587, 709.720327982);
    delay(78);
    tone(tonePin, 554, 709.720327982);
    delay(78);
    digitalWrite(13,HIGH);
    delay(10);
    digitalWrite(13,LOW);
    
  }
}
