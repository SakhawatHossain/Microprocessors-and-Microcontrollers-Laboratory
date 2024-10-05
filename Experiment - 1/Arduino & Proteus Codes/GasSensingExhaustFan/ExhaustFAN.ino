const int Sesnsor_Pin = A0; // Sensor Pin
const int Fan_Pin = 7; // Fan Pin
const int RedLED = 10; // Red LED Pin


void setup() 
{
  pinMode(Sesnsor_Pin,INPUT);  // Sensor Pin as a INPUT
  pinMode(Fan_Pin,OUTPUT);  // Fan Pin as a OUTPUT
  pinMode(RedLED,OUTPUT);  // Red LED Pin as a OUTPUT
}
void loop() 
{
  if(digitalRead(Sesnsor_Pin) == HIGH)  // If Sesnsor Detect the Smoke
  {
    digitalWrite(Fan_Pin,HIGH);  // Turn ON the Fan
    digitalWrite(RedLED,HIGH);  // Turn ON the Red LED
  }
  else
  {
    digitalWrite(Fan_Pin,LOW);  // Turn OFF the Fan
    digitalWrite(RedLED,LOW);  // Turn OF the Red LED
  }
}
