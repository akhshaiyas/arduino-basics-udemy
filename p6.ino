#define PUSHBUTTON 2
#define LED 11
void setup() {
  //switch on the LED when button is pressed
  //switch off the LED when the button is not pressed
  pinMode(PUSHBUTTON, INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  if(digitalRead(PUSHBUTTON)== HIGH)
  {
    digitalWrite(LED, HIGH);
    delay(50);
  }
  else
  {
    digitalWrite(LED, LOW);
    delay(50);
  }
}