/* Program that reads the temperature from a DS18B20 Digital Temperature Sensor and
 * prints it to Serial Monitor (in degrees Celcius).
 * The DS18B20 uses the OneWire protocol to transmit data with two amazing benefits:
 *   - Only one pin of the dev board is to receive/transmit commands/data
 *   - On the same pin (bus) can get connencted multiple DS18B20 sensors and get indexed from software.
 */

#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 8 // Arduino pin that the DS18B20 data wire is connencted to.

/* Setup an oneWire instance to communicate with any OneWire devices 
 * and pass the oneWire reference to Dallas Temperature 
 */
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature temp_sensor(&oneWire);

void setup() {
  /* Establish serial communication */
  Serial.begin(9600);
  /* Reset the DS18B20 sensor */
  temp_sensor.begin();  
}

void loop() {
  Serial.print("Temperature = "); Serial.print(get_temperature()); Serial.println(" oC"); 
  delay(1000);
}

float get_temperature(){
  /* Issue a global temperature request to all devices on the bus */
  temp_sensor.requestTemperatures();
  return temp_sensor.getTempCByIndex(0);
  /* Why "byIndex"?  
   * You can have more than one DS18B20 on the same bus.  
   * 0 refers to the first IC on the wire. 
   */
}
