int IR= 3;
int Laser=5;
void setup() {
  // put your setup code here, to run once:
pinMode(IR,OUTPUT);
pinMode(Laser,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int IRvalue = digitalRead(IR);
  if(IRvalue==HIGH)
  {
    digitalWrite(Laser, HIGH);
  }
  else
  {
    digitalWrite(Laser, LOW);
  }

}
