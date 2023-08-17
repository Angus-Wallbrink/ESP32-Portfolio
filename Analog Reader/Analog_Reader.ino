// Defines the pin connected to the potentiometer
const int potPin = 4;
// Variable to store the analog reading
int potValue = 0;

void setup() {
  // Initializes the serial communication at a baud rate of 9600  
  Serial.begin(9600);
  // Sets a delay of 1000 milliseconds for initialization
  delay(1000);
}

void loop() {
  // Reads the analog value of the potentiometer
  potValue = analogRead(potPin);
  // Prints the value of the potentiometer to the serial moniter
  Serial.println(potValue);
  // Sets a delay of 500 milliseconds before the next iteration of the loop
  delay(500);
}
