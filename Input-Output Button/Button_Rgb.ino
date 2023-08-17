// sets the pin numbers
// the number of the pushbutton pin
const int buttonPin = 4;  
// the number of the LED pin
const int ledPin =  5;    

// variable for storing the pushbutton status
int buttonState = 0;

void setup() {
  // Initializes serial communication at a baud rate of 115200 bits per second
  Serial.begin(115200);  
  // initializes the pushbutton pin as an input
  pinMode(buttonPin, INPUT);
  // initializes the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // reads the state of the pushbutton value
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  // checks if the pushbutton is pressed, if it is, the buttonState is set to HIGH
  if (buttonState == HIGH) {
    // turns the  LED on
    digitalWrite(ledPin, HIGH);
  } else {
    // turns the LED off
    digitalWrite(ledPin, LOW);
  }
}
