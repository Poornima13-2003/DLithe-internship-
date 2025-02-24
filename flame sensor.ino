int flame= 4;
int buzzer = 35; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(flame, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int flamevalue= digitalRead(flame);
  if(flamevalue==HIGH)
  {
    digitalWrite(buzzer, HIGH);
    Serial.println("Flame is detected");
  }
  else
  {
    digitalWrite(buzzer, LOW);
    Serial.println("Flame is not detected");
  }
delay(1000);
}
