//initialize the variable
int ledpin =13; //connect our LED to pin 13
int delaytime =500; // initialize delay variable

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT); //set the pin as output

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ledpin, HIGH); // turn on the LED
  delay(delaytime); // hold the state for  a half a minute
  digitalWrite(ledpin, LOW); // turn off the LED
  delay(delaytime);//hold the state for another half a minute

}
