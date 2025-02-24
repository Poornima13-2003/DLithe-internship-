void setup()
{
  Serial.begin(9600);
pinMode(42,OUTPUT);
pinMode(6, OUTPUT);
pinMode(5,OUTPUT);
}
void loop()
{
  digitalWrite(42,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  Serial.println("LED is on");
  Serial.println("Buzzer is off");
  Serial.println("Relay is off");
  delay(1000);
  digitalWrite(42,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  Serial.println("LED is off");
  Serial.println("Buzzer is on");
  Serial.println("Relay is on");

  delay(1000);
}