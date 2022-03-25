/* 
Light and temperature meter
Nathan's code, original idea from Adafruit.com
*/

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {

  // read temperature on analog-0
  int a0 = analogRead(0);
  // read light level on analog-1
  int a1 = analogRead(1);

  // convert analog readings into voltages.
  // Using standard 1024 state analog to digital converter
  // and 0-5v range
  float temp_voltage = (float)a0 * 5.0 / 1023.0;
  float light_voltage = (float)a1 * 5.0 / 1023.0;

  // convert temperature voltage into temperature in degC
  // using T=25C at 750mv and 10mV/degC
  float temp_C = 25.0 + (temp_voltage - 0.750) / (0.010);

  // convert light voltage into photo-resistor resistance.
  // assuming a 13k and photo-resistor divider
  // assuming light voltage is measured across photoresistor
  float R1 = 13000.0; //fixed v - divider resistor, above the photoresistor.
  // vltage divider calculation, solve for photo-resistance
  float light_R = R1 / ((5.0 / light_voltage) - 1);

  Serial.print(millis());
  Serial.print(",");
  Serial.print(a0);
  Serial.print(",");
  Serial.print(temp_voltage);
  Serial.print(",");
  Serial.print(temp_C);
  Serial.print(",");
  Serial.print(a1);
  Serial.print(",");
  Serial.print(light_voltage);
  Serial.print(",");
  Serial.print(light_R);
  Serial.println(",");
  delay(1000);
}

/* Sample output 
 *  
 *  
37091,141,0.69,18.91,3,0.01,38.24,
38092,139,0.68,17.94,2,0.01,25.47,
39095,139,0.68,17.94,2,0.01,25.47,
40097,140,0.68,18.43,1,0.00,12.72,
41100,142,0.69,19.40,2,0.01,25.47,
42102,139,0.68,17.94,2,0.01,25.47,
43105,139,0.68,17.94,2,0.01,25.47,
44107,139,0.68,17.94,3,0.01,38.24,
45109,142,0.69,19.40,42,0.21,556.57,
46111,141,0.69,18.91,53,0.26,710.31,
*/
 */
