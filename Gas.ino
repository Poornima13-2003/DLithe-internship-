int gas=A0;
int LED=42;
void setup() {

  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(gas, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int gasvalue= analogRead(gas);
  Serial.print(gasvalue);
  if(gasvalue<=300)
  {
    digitalWrite(LED, HIGH);
    Serial.println("gas value is above 500");
  }
  else
  {
    digitalWrite(LED,LOW);
    Serial.println("gas value is below 500");
  }
delay(1000);
}
