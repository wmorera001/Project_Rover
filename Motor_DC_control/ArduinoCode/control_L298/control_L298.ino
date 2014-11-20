int ENA = 5; 
int IN1 = 2;
int IN2 = 3;
void setup()
{
  pinMode (ENA, OUTPUT);    
  pinMode (IN1, OUTPUT);    
  pinMode (IN2, OUTPUT);
  Serial.begin(115200);
  Serial.print("type: \n");
  Serial.print("0 = Motor stops \n");
  Serial.print("1 = Motor runs in clockwise direction \n");
  Serial.print("2 = Motor runs in  anticlockwise direction \n");
}
void loop()
{
  
  
  if (Serial.available() > 0) {
    int cc = Serial.read(); //wait character
    switch (cc) {
      
    case '0':
    //stop
      digitalWrite (IN2, LOW);
      digitalWrite (IN1, LOW);
      break;
      
    case '1':
    //slowly stop
      digitalWrite (IN1, LOW); 
      digitalWrite (IN2, LOW); 
      delay(3000);
     //Clockwise direction
      digitalWrite (IN1, HIGH);
      digitalWrite (IN2, LOW); 
      analogWrite(ENA,120); //PWM
      break;
  
    case '2':
    //slowly stop
      digitalWrite (IN2, LOW); 
      digitalWrite (IN1, LOW); 
      delay(3000);
  // anticlockwise direction
      digitalWrite (IN2, HIGH);
      analogWrite(ENA,120); //PWM
      break;
    }
  }
}

