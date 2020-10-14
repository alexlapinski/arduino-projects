/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int purpleLed = 13;
int blueLed = 12;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(purpleLed, OUTPUT);
  pinMode(blueLed, OUTPUT);     
}

void blinkLights(int iterations, int onLength, int offLength) {
for (int i = 0; i < iterations; i++) {

  digitalWrite(purpleLed, HIGH);
  digitalWrite(blueLed, HIGH);// turn the LED on (HIGH is the voltage level)
  delay(onLength);               // wait for a second
  
  digitalWrite(purpleLed, LOW);
  digitalWrite(blueLed, LOW);// turn the LED off by making the voltage LOW
  delay(offLength);
  }
}

// the loop routine runs over and over again forever:
void loop() {

  blinkLights(10, 250, 50);

  blinkLights(10, 50, 400);

  blinkLights(10, 250, 50);
  
  
}
