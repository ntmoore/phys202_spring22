/*
Measure the voltage on ADC channel A0 and print to screen
building off of https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogInOutSerial
*/

int sensorValue;
float voltageValue;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read analog 0
  sensorValue = analogRead(0);
  // map the sensor value to the 0-5v analog range
  voltageValue = 5.0*(1.0*sensorValue/1023.0);

  // print the results to the Serial Monitor:
  Serial.print("time(ms) = ");
  Serial.print(millis());
  Serial.print("\t sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t voltage = ");
  Serial.println(voltageValue);

  // wait 2000 milliseconds before reading again
  delay(2000);
}
