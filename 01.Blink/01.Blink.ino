/* Program that blinks a led with frequency 1 Hz and duty cycle 50%.
 * The Arduino devboard has a builtin on pin 13 
 * accessed also by the macro LED_BUILTIN.
 */

#define LED 8 // Arduino pin that the led is connected to

void setup() {
  /* Set LED pin as output */
  pinMode(LED, OUTPUT); 
}

void loop() {
  /* Turn the led on (HIGH) for 0.5 sec and then off (LOW) again for 0.5 sec */
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}
