#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);
  count = toggle = 0;
  digitalWrite(PIN_LED, 0);
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

unsigned int toggle_state(unsigned int toggle) {
  return (toggle + 1) % 2;
}
