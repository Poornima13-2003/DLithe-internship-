int brightness = 0;

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  for (brightness = 0; brightness <= 255; brightness += 5) {
    analogWrite(13, brightness);
    delay(300); // Wait for 30 millisecond(s)
  }
  for (brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(13, brightness);
    delay(300); // Wait for 30 millisecond(s)
  }
}