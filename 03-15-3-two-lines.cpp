/*
Blink

modified to blink 2 LED's at different rates

*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins 9 and 10
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(9, HIGH);   
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);                       
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);      
}
