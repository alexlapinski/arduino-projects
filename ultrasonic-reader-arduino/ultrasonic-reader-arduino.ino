const int trigPin = 10;
const int echoPin = 9;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600); // maybe?
}

void loop() {
  // Clear Trigger Pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Set Trigger Pin on High State for 10 micro secondss
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin, return sound wave traveltime in micro seconds
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distace (using soundwave constants)
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);
}
