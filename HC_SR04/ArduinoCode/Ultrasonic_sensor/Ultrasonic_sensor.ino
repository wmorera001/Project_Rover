long distance;
long time;
void setup(){
  Serial.begin(9600);
  pinMode(9, OUTPUT); //trigger
  pinMode(8, INPUT); // echo
}

void loop(){
  digitalWrite(9,LOW);
  delayMicroseconds(5);
  digitalWrite(9, HIGH); // send ultrasonic pulse
  delayMicroseconds (10);
  time=pulseIn(8, HIGH); 
  distance= int(0.017*time); // d=v*t, v=0.034cm/microsec, Treal= t/2, integer
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);
}
