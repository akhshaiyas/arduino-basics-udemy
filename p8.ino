#define Potentiometer A2
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(Potentiometer));
  delay(1000);
}