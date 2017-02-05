
int LED1Pin = 1;
int LED2Pin = 2;
int LED3Pin = 3;
int LED4Pin = 4;
int LED5Pin = 5;

void setup() {
pinMode(LED1Pin, OUTPUT);
pinMode(LED2Pin, OUTPUT);
pinMode(LED3Pin, OUTPUT);
pinMode(LED4Pin, OUTPUT);
pinMode(LED5Pin, OUTPUT);
}

void loop() {
for (int scan = 1; scan <9; scan++){
  digitalWrite (LED1Pin, LOW);
  digitalWrite (LED2Pin, LOW);
  digitalWrite (LED3Pin, LOW);
  digitalWrite (LED4Pin, LOW);
  digitalWrite (LED5Pin, LOW);
  if (scan ==1) digitalWrite(LED1Pin, HIGH);
  if (scan ==2) digitalWrite(LED2Pin, HIGH);
  if (scan ==3) digitalWrite(LED3Pin, HIGH);
  if (scan ==4) digitalWrite(LED4Pin, HIGH);
  if (scan ==5) digitalWrite(LED5Pin, HIGH);
  if (scan ==6) digitalWrite(LED4Pin, HIGH);
  if (scan ==7) digitalWrite(LED3Pin, HIGH);
  if (scan ==8) digitalWrite(LED2Pin, HIGH);
  delay(500);
}

}
