const int INPUT_PIN = 3;

void setup() {
  pinMode(INPUT_PIN, INPUT);
  Serial.begin(115200);
  Serial.println("Starting...");
}

int max = 0, min = 2000;
void loop() {
  while (digitalRead(INPUT_PIN) == LOW) {
    ;
  }
  int microStart = micros();
  while (digitalRead(INPUT_PIN) == HIGH) {
    ;
  }
  int microStop = micros();

  int highTime = microStop - microStart;
  if (highTime < min) { min = highTime; }
  if (highTime > max) { max = highTime; }
  Serial.print(highTime);
  Serial.print("-- Max:");
  Serial.print(max);
  Serial.print("  Min:");
  Serial.print(min);
  Serial.println();
}
