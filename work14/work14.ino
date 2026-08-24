#define SOIL_PIN A0

void setup() {
  Serial.begin(115200);
}

void loop() {
  int soilValue = analogRead(SOIL_PIN);

  Serial.println(soilValue);

  delay(500);
}
