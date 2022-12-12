/* Program that controls the blink speed of a led with a potentiometer. */

#define LED 8 // Arduino pin that the led is connected to
#define POTENTIOMETER A0 // Arduino pin that the potentiometer is connected to

void setup() {
  /* Set LED pin as output */
  pinMode(LED, OUTPUT);
  /* Set POTENTIOMETER pin as input */
  pinMode(POTENTIOMETER, INPUT);
}

void loop() {
  /* Read the value of the ADC */
  float adc = analogRead(POTENTIOMETER);
  /* Convert it to blink speed */
  int x = 500 - (adc / 1024) * 499;
  
  /* Blink the led */
  digitalWrite(LED, HIGH);
  delay(x);
  digitalWrite(LED, LOW);
  delay(x);
}
