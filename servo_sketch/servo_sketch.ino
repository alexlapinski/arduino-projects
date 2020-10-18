#include <Servo.h>

Servo servo;
int servoPin = 5;

int purpleLed = 7;
int blueLed = 6;

void setup() {
  pinMode(purpleLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  
  servo.attach(servoPin);
  servo.write(0);

}

void blinkLights(int iterations, int onLength, int offLength, int ledPin) {
for (int i = 0; i < iterations; i++) {

  digitalWrite(ledPin, HIGH);
  delay(onLength);
  
  digitalWrite(ledPin, LOW);
  delay(offLength);
  }
}

void spinServo(int fromAngle, int toAngle) {
  int angle;

  for( angle = fromAngle; angle < toAngle; angle++) {
    servo.write(angle);
    delay(15);
  }
}

void loop() {


  blinkLights(3, 250, 150, blueLed);
  spinServo(0, 180);

  delay(1000);

  blinkLights(3, 250, 150, purpleLed);
  spinServo(180, 0);

  delay(1000);

}
