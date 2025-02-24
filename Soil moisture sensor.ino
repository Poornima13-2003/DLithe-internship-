int Buzzer =6;
int soil=A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Buzzer,OUTPUT);
pinMode(soil, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int v= analogRead(soil);
  Serial.print(v);
if(v<500)
{
  digitalWrite(Buzzer, HIGH);
  Serial.print("Buzzer is on");
}
else
{
  digitalWrite(Buzzer,LOW);
}
}
