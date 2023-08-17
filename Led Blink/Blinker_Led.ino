void setup() {
  // initializes digital pin GPIO18 as an output.
  pinMode(18, OUTPUT);
}

void loop() {
  // turns the LED on
  digitalWrite(18, HIGH); 
  // Sets a delay of 500 milliseconds
  delay(500);    
  // turns the LED off
  digitalWrite(18, LOW); 
  // Sets a delay of 500 milliseconds
  delay(500);             
}
