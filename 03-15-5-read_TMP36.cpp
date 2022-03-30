/*
Measure the voltage (from a TMP36) on ADC channel A1 and print to screen
building off of https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogInOutSerial
*/

int sensorValue;
float voltageValue;
float Temp_C;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read analog 1
  sensorValue = analogRead(1);
  // map the sensor value to the 0-5v analog range
  voltageValue = 5.0*(1.0*sensorValue/1023.0);
  
  // the temp conversion formula will be something like this?
  // using 25C @ 750mV and 10mV/C ???
  Temp_C = (voltageValue-0.75)*(1/0.01)+25.0;

  // print the results to the Serial Monitor:
  Serial.print("time(ms) = ");
  Serial.print(millis());
  Serial.print("\t sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t voltage = ");
  Serial.print(voltageValue);
  Serial.print("\t tempC= ");
  Serial.println(Temp_C);
  // wait 2000 milliseconds before reading again
  delay(2000);
}
