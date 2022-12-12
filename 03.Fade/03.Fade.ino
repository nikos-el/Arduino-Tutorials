/* Program that increases and then decreases the brightness
 * of a led using PWM.
 * The led must be connected to PWM (~) pin of Arduino (3, 5, 6, 9, 10, 11).
 * The second parameter passed to analogWrite() function indicates 
 * the duty cycle of the PWM waveform.
 * (0 --> 0% (LOW), 127 --> 50%, 255 --> 100% (HIGH))
 */

#define LED 9 // Arduino pin that the led is connected to

void setup() {
  /* Set LED pin as output */
  pinMode(LED, OUTPUT);
}

void loop() {
  /* Increase the led brightness, by increasing the PWM duty cycle */
  for (int i = 0; i < 256; i++){
    analogWrite(LED, i);
    delay(5);
  }
  /* Decrease the led brightness, by decreasing the PWM duty cycle */
  for (int i = 255; i >= 0; i--){
    analogWrite(LED, i);
    delay(5);
  }
}
