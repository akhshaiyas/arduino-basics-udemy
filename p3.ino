void setup() {
  // make the led blink :
  //power on led for 2 s
  //power off led for 1s
  //print some text when led turns on/off
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("LED is ON");
  digitalWrite(13,HIGH);
  delay(2000);
  Serial.println("LED is OFF");
  digitalWrite(13,LOW);
  delay(1000);
}