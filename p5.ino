#define LED_OUT 11

void setup() {
  //make the led glow from 0 to 255 intensity
  //back to 0 from 255 after a small delay
  pinMode(LED_OUT,OUTPUT);
  analogWrite(LED_OUT,0);
}

void loop(){
  for (int i=0; i<=255 ; i++)
  {    
    analogWrite(LED_OUT,i);
    delay(5);
  }
  for (int i=255; i>=0 ; i--)
  {    
    analogWrite(LED_OUT,i);
    delay(5);
  }
}