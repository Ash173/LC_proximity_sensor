const int analogInPin = A0;  
const int ledPin = 13;      
const float thresholdVoltage = 1.6;  



void setup() {
  pinMode(ledPin, OUTPUT);    
  Serial.begin(9600);         
}

void loop() {
  
  int sensorValue = analogRead(analogInPin);
  
  
  if (sensorValue * (5.0 / 1023.0) < thresholdVoltage) {
    digitalWrite(ledPin, HIGH);  
  } else {
    digitalWrite(ledPin, LOW);   
  }
  
  
  delay(10);  
}

