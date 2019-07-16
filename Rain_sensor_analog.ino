int SensorReading = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  SensorReading=analogRead(A0);
  
  if(SensorReading <= 100) {
    Serial.println("Dry");
  }
  else if(SensorReading > 100 && SensorReading <=300) {
    Serial.println("Low");
  }
  else if(SensorReading > 300 && SensorReading <=500) {
    Serial.println("Med");
  }
  else if(SensorReading > 500) {
    Serial.println("High");
  }
  delay(200);
}
