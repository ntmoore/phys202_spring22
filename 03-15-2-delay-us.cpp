/*
Blink-us

Modified version of the blink program that delays for us instead of ms

details on the new function here:
  https://www.arduino.cc/reference/en/language/functions/time/delaymicroseconds/
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delayMicroseconds(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delayMicroseconds(1000);                       // wait for a second
}
