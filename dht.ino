#define dht_dpin 2 //no ; here. Set equal to channel sensor is on
#include<dht.h>
dht DHT;      

void setup()
{
  Serial.begin(9600);
  Serial.println("Humidity and temperature\n\n");
}

void loop(){
  //This is the "heart" of the program.
   DHT.read11(dht_dpin);
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
  delay(1000);
}
