int ss = A0;
int LED = 42;
void setup() {

  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ss, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int V= analogRead(ss);
  if(V >= 500)
  {
    digitalWrite(LED, HIGH);
    Serial.println("Sensor value is above 500");
  }
  //Serial.println(V);
  delay(1000);

}
