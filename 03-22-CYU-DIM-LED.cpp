/*
Dim-us
Modified version of the blink program that delays for us instead of ms
details on the new function here:
  https://www.arduino.cc/reference/en/language/functions/time/delaymicroseconds/
*/

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int t=200;
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delayMicroseconds(t);                       // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  delayMicroseconds(500-t);                       // wait for a second
}
