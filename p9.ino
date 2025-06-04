#define LED 11
#define POTENTIOMETER A2
void setup() {
  // vary the led brightness based on potentiometer
  Serial.begin(9600);
  pinMode(11,OUTPUT);
}

void loop() {
  int pvalue = analogRead(POTENTIOMETER); //btn 0 and 1023
  int ledvalue = pvalue/4; //btn 0 and 255
  analogWrite(LED,ledvalue);
}