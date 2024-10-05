void setup() {
  Serial.begin(9600);
  pinMode(1, INPUT_PULLUP);
  pinMode(13, OUTPUT);
.
}
void loop() {
 
  int sensorVal = digitalRead(1);

  Serial.println(sensorVal);
  if (sensorVal == HIGH) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}