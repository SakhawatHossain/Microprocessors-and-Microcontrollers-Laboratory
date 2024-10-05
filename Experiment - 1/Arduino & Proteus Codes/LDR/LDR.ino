const int LEDPin = 13;// Initialize Pin11 for connecting LED
const int LDRPin = A0;// Initialize PIN A0 LDR PIN
void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);// Define LED pin as output
  pinMode(LDRPin, INPUT);// Define LDR pin as input 
}
void loop() {

  int ldrStatus = analogRead(LDRPin); // read LDR lignt intensity as analog value
// Control LED based on LDR light intensity
  if (ldrStatus <= 100) {

    digitalWrite(LEDPin, HIGH);

    Serial.print(" LIGHT ON : ");

    Serial.println(ldrStatus);

  } else {

    digitalWrite(LEDPin, LOW);

    Serial.print("LIGHT OFF: ");

    Serial.println(ldrStatus);// Print LDR analog value on serial port
  }
}