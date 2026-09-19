const int PomPin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(PomPin, OUTPUT);

  digitalWrite(PomPin, LOW);
  Serial.println("Pompe on!");
  delay(1000);

  digitalWrite(PomPin, HIGH);
  Serial.println("Pompe off!");
}

void loop() {
}
