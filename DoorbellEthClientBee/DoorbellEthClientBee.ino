/*
Wed Jul 31 23:19:56 CEST 2013, Lloyd DIZON
Xbee client - sends data to server

Router/End device
atid    - 2001
atsh/sl - 13A200/40A63C57
atdh/dl - 13A200/408B1877

*/


// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT); 

  // Open serial communications and wait for port to open:
  Serial.begin(9600);  
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
    Serial.print('D');
    delay(1000);
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
}

