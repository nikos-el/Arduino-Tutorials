/* Program that reads the output value of a voltage divider (potentiometer) 
 * and prints it on Serial Monitor.
 * The potentiometer must be connected to an analog input pin (adc).
 * Analog to Digital Conversion on Arduino has 10-bit precision, so the adc output
 * is an integer in (0,1023).
 */

#define POTENTIOMETER A0 // Arduino pin that the potentiometer is connected to
#define Vref 5 // Voltage reference for ADC

void setup() {
  /* Set POTENTIOMETER pin as input */
  pinMode(POTENTIOMETER, INPUT);
  /* Initialize Serial Monitor */
  Serial.begin(9600);
}

void loop() {
  /* Read the value of the ADC */
  float adc = analogRead(POTENTIOMETER);
  /* Convert it to voltage */
  float voltage = (adc / 1024) * Vref;
  /* Print the voltage to Serial Monitor */
  Serial.print("Voltage = "); Serial.print(voltage); Serial.println(" V");
  delay(500);
}
