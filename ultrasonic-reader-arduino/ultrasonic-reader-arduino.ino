void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void ledOn() {
  digitalWrite(LED_BUILTIN, HIGH);
}

void ledOff() {
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  ledOff();
  delay(100);                    
  
  ledOn();
  delay(100);
  
  ledOff();
  delay(100);

  ledOn();
  delay(100);

  ledOff();
  delay(100);

  ledOn();
  delay(100);

  ledOff();
  delay(5000);
  
}
