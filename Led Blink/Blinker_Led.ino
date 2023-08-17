void setup() {
  // initialize digital pin GPIO18 as an output.
  pinMode(18, OUTPUT);
}

void loop() {
  digitalWrite(18, HIGH); // turns the LED on
  delay(500);             // waits for 500 milliseconds
  digitalWrite(18, LOW);  // turns the LED off
  delay(500);             // waits for 500 milliseconds
}
