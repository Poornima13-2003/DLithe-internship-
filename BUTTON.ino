#include <DHT.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <ThingSpeak.h>
#include <Adafruit_Sensor.h>
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
const char* ssid = "GMIT";
const char* password = "DAVANGERE";
WiFiClient client;
unsigned long myChannelNumber = 12345;
const char * myWriteApiKey = "ABCDEFGH";
uint8_t temperature, humidity;
void setup()
{
  Serial.begin(9600);
  dht.begin();
  delay(10);
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println(WiFi.localIP());
  ThingSpeak.begin(client);
}
void loop()
{
  temperature = dht.readTemperature();
  humidity = dht.readHumidity();
  Serial.print("Temperature Value is :");
  Serial.print(temperature);
  Serial.println("C");
  Serial.print("Humidity Value is :");
  Serial.print(humidity);
  Serial.println("%");
  ThingSpeak.writeField(myChannelNumber, 1, temperature, myWriteAPIKey);
  ThingSpeak.writeField(myChannelNumber, 2, humidity, myWriteAPIKey);
  delay(3000);
}
