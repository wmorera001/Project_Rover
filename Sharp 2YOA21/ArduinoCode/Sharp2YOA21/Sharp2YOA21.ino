
int distance;
int sensorValue;
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  int sensorValue= analogRead(A0);
  distance= 4800/(sensorValue-20); // Good stimation for sharp IR sensors
  Serial.print("distance=");
  Serial.print(distance);
  Serial.print(" ");
  Serial.println("Cm ");
  delay(1000);
}
