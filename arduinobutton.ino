#define RELAY_PIN 8 // Digital pin connected to the relay module
#define BUTTON_PIN 2 // Digital pin connected to the push button

void setup() 
{
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() 
{
  int buttonState = digitalRead(BUTTON_PIN);
  
  if(buttonState == HIGH) {
    // Button is pressed, turn ON the motor via relay
    digitalWrite(RELAY_PIN, HIGH);
    delay(1000); // Delay for motor ON time (1 second in this case)
  } else 
  {
    // Button is not pressed, turn OFF the motor via relay
    digitalWrite(RELAY_PIN, LOW);
  }
}
