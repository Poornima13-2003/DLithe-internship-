int Relay =5;
int IR= 8;
void setup() {
  // put your setup code here, to run onc
  Serial.begin(9600);  
  pinMode(Relay, OUTPUT);
  pinMode(IR, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int V=digitalRead(IR);
  if(V==HIGH)
  {
  digitalWrite(Relay, HIGH);
  Serial.print("Motor is ON");
  delay(5000); 
  }
  else
  {
  digitalWrite(Relay,LOW);
  Serial.println("Motor is OFF");
  delay(5000);
  }
  
}
