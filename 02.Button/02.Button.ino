/* Program that controls a led from a button (via software). */

#define LED 8 // Arduino pin that the led is connected to
#define BUTTON 5 // Arduino pin that the button is connected to

void setup() {
  /* Set LED pin as output and BUTTON pin as input*/
  pinMode(LED, OUTPUT); 
  pinMode(BUTTON, INPUT);
}

void loop() {
  /* Read the value from the button and turn on or off the led */
  if (digitalRead(BUTTON) == HIGH)
    digitalWrite(LED, HIGH);
  else
    digitalWrite(LED, LOW);
}
