#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);
  digitalWrite(PIN_LED, 0);
}

void loop() {
  delay(1000);
  for (int i = 0; i < 10; i++) {
    digitalWrite(PIN_LED, i % 2);
    delay(100);
  }
  while (1) {
    delay(5000);
  }
}
