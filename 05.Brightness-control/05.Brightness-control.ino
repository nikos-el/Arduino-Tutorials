/* Program that controls the brightness of a led with a potentiometer (software). */

#define LED 9 // Arduino pin that the led is connected to
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
  /* Convert it to PWM value */
  int brightness = adc / 1024 * 256;
  /* Change the led brightness */
  analogWrite(LED, brightness);
}
