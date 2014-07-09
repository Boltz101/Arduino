/*
  Traffic Lights
  Turns on an LED on in a predetermined sequence - Red, Red Amber, Green, Amber, Red.
 
  This example code is in the public domain.
 */
 
// determine the colours and the pins that they are connected to
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
  
  //test that the pins are all working
  {
  digitalWrite(red, HIGH);
  digitalWrite(amber, HIGH);
  digitalWrite(green, HIGH);
  delay(2500);
  digitalWrite(red, LOW);
  digitalWrite(amber, LOW);
  digitalWrite(green, LOW);
  }
  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(red, LOW); //makes sure that red is off to begin the loop
  delay(1250);
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
