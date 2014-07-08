/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 12; //green
int led2 = 11; //green
int led3 = 8; //red
int led4 = 7; //red
int led5 = 4; //yellow
int led6 = 3; //yellow


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pins as an output.
  pinMode(led, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  {
  digitalWrite(led, HIGH);   // turn the 2 green lights
  digitalWrite(led2, HIGH);
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the 2 green lights off by making the voltage LOW
  digitalWrite(led2, LOW); 
  } 
  {
  digitalWrite(led3, HIGH);   // turn the red lights on (HIGH is the voltage level)
  digitalWrite(led4, HIGH);
  delay(1000);               // wait for a second
  digitalWrite(led3, LOW);    // turn the 2 red lights off by making the voltage LOW
  digitalWrite(led4, LOW);
  }
  {
  digitalWrite(led5, HIGH);   // turn the yellow lights on (HIGH is the voltage level)
  digitalWrite(led6, HIGH);
  delay(1000);               // wait for a second
  digitalWrite(led5, LOW);    // turn the 2 yellow lights off by making the voltage LOW
  digitalWrite(led6, LOW);
  }
  
}
