/*
  This code blinks 3 LED's in sequence.  Written as an intro to IF-ELSE branching.
  Note: 
    = means "assign"
    == means "are these identical?"
*/

int RED_LED = 10;
int GREEN_LED = 11;
int BLUE_LED = 12;
int state;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  state = 0;
}

// the loop function runs over and over again forever
void loop() {

  if (state == 0) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(BLUE_LED, LOW);
    state = state + 1;
  } else {
    if (state == 1) {
      digitalWrite(RED_LED, LOW);
      digitalWrite(GREEN_LED, HIGH);
      digitalWrite(BLUE_LED, LOW);
      state = state + 1;
    }
    else {
      if (state == 2) {
        digitalWrite(RED_LED, LOW);
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(BLUE_LED, HIGH);
        delay(200);
        digitalWrite(BLUE_LED, LOW);
        delay(200);
        digitalWrite(BLUE_LED, HIGH);
        delay(200);
        state = 0;
      }
    }
  }

  delay(1000);
}
