int IR=9; 
int IRvalue;
void setup()
{
Serial.begin(9600);
pinMode(IR, INPUT); 
pinMode(13, OUTPUT); // LED Pin Output
}
void loop()
{
IRvalue=digitalRead(IR);
if (IRvalue==1)
{
digitalWrite(13, LOW); // LED High
Serial.println("Object detected");
}
else
{
digitalWrite(13, HIGH);
Serial.println("Object is not detected");
}
delay(1000);
}
