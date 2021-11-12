
//initialize variables

int ldrpin = A0; //ldr pin
int ledpin = 13; //led pin
int delaytime = 500; //delay time


void setup() {
  // put your setup code here, to run once:
pinMode(ledpin, OUTPUT); //set up the led as input
Serial.begin(9600); // set up the serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
int ldrval = analogRead(ldrpin);//read the value from the LDR (between 0-1023
float voltage = ldrval * (5.0 / 1023.0);
delay(delaytime); //pause a while

if ( voltage < 4.5){ //if voltage is less than 4.5
digitalWrite(ledpin, HIGH);
Serial.println( "Night mode");
delay(delaytime); //pause a while

}else{
  digitalWrite(ledpin, LOW);
  Serial.println( "Day mode");
  delay(delaytime); // pause a while
}
}
