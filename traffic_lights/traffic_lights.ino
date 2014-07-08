/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int green = 12; //green
int amber = 8; //amber
int red = 4; //red



// the setup routine runs once when you press reset:
void setup() 
{                
  // initialize the digital pins as an output.
  pinMode(green, OUTPUT); 
  pinMode(amber, OUTPUT);
  pinMode(red, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(red, HIGH); //red on
  delay(1250);
  digitalWrite(amber, HIGH); //red amber on
  delay(1250);
  digitalWrite(red, LOW);
  digitalWrite(amber, LOW); //red amber off
  delay(250);
  digitalWrite(green, HIGH); //green on
  delay(1250);
  digitalWrite(green, LOW); //green off
  delay(250);
  digitalWrite(amber, HIGH); //amber on
  delay(1250);
  digitalWrite(amber, LOW); //amber off
  delay(250);
  digitalWrite(red, HIGH); //red on
  delay(1250);

  
}
