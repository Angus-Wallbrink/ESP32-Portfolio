// Set pin numbers
const int buttonPin = 4;  // the number of the pushbutton pin
const int ledPin = 5;     // the number of the LED pin

// Variable for storing the pushbutton status
int lastButtonState = LOW; // Previous state of the button
bool isButtonOn = false;

void setup() {
  Serial.begin(115200);
  
  // Initializes the pushbutton pin as an input
  pinMode(buttonPin, INPUT);
  // Initializes the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Reads the current state of the pushbutton
  int buttonState = digitalRead(buttonPin);
  
  // Check for a state change of the button
  if (buttonState != lastButtonState) {
    delay(50);  // Debounce delay to prevent rapid toggling

    // If the button is pressed
    if (buttonState == HIGH) {
      if (!isButtonOn) {
        digitalWrite(ledPin, HIGH);
        isButtonOn = true;
      } else {
        digitalWrite(ledPin, LOW);
        isButtonOn = false;
      }
    }
    
    // Update the last button state
    lastButtonState = buttonState;
  }
}

