#define LED 11
#define PUSHBUTTON 2
void setup() {
  // using a pull up resistor
  pinMode(PUSHBUTTON, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(PUSHBUTTON)==HIGH)
  {
    Serial.println("LED is OFF");
    digitalWrite(LED, LOW);
    delay(1000);
  }
  else
  {
    Serial.println("LED is ON");
    digitalWrite(LED, HIGH);
    delay(1000);
  }
}