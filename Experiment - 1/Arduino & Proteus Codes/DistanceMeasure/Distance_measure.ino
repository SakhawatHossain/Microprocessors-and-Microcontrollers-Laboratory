#include <LiquidCrystal.h>  //lcd libary                                       
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);   //LCD object Parameters: (rs, enable, d4, d5, d6, d7)
const int trigPin = 12; //trig pin connection 
const int echoPin = 11;  //echopin connection 
long duration;
int distanceCm;
int distanceM;
float liquid;
                                                                                                            
void setup() { 
lcd.begin(16,2);                                                   
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
lcd.setCursor(0,0);
lcd.print("  Distance    ");
lcd.setCursor(0,1);
lcd.print("  Measurement  ");
delay(2000);
lcd.clear();
}

void loop() {  
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm = duration*0.034/2;
distanceM = distanceCm/100;                                                                                 
lcd.setCursor(0,0);                                                 
lcd.print("Calculated ");
delay(10);
lcd.setCursor(0,1);
lcd.print("Distance is:");
lcd.print(distanceM);
lcd.print(" m ");
delay(10);
}