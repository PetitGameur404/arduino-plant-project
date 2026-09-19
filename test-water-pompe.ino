const int PomPin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(PomPin, OUTPUT);
}

void loop() {
  digitalWrite(PomPin, LOW);
  Serial.println("Pompe on!");
  delay(1000);
}