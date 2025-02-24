#include <Ultrasonic.h>
int LED=42;
int Buzzer = 6;
int Relay =5;
Ultrasonic ultrasonic(12, 13);
int distance;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED, OUTPUT);
pinMode(Buzzer, OUTPUT);
pinMode(Relay, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  distance = ultrasonic.read();
  
  //Serial.print("Distance in CM: ");
  //Serial.println(distance);
  //delay(1000);
if(distance<5)
{
  digitalWrite(LED, HIGH);
  digitalWrite(Buzzer, LOW);
  digitalWrite(Relay,LOW);
  Serial.println("LED is ON");
  delay(2000);
  digitalWrite(Buzzer, HIGH);
  digitalWrite(LED, LOW);
  digitalWrite(Relay,LOW);
  Serial.println("Buzzer is ON");
  delay(2000);
  digitalWrite(Relay, HIGH);
  digitalWrite(Buzzer, LOW);
  digitalWrite(LED, LOW);
  Serial.println("Relay is ON");
  delay(2000);

}
}
