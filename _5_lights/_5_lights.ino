int led = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 8;

// the setup routine runs once when you press reset:
void setup() {               
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
    {digitalWrite(led2, HIGH);
    delay(100);
    digitalWrite(led2, LOW);
    delay(100);}
      {digitalWrite(led3, HIGH);
      delay(100);
      digitalWrite(led3, LOW);
       delay(100);}// wait for a second
         {digitalWrite(led4, HIGH);
          delay(100);
          digitalWrite(led4, LOW);}
                {digitalWrite(led5, HIGH);
    delay(100);
    digitalWrite(led5, LOW);
    delay(100);}
}
