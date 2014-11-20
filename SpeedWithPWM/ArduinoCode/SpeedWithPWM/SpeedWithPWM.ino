  void setup(){ 
    pinMode(3, OUTPUT);
    Serial.begin(9600);
  Serial.print("type: \n");
  Serial.print("0 = Motor stops \n");
  Serial.print("1 = 100 PWM \n");
  Serial.print("2 = 150 PWM \n");
  Serial.print("3 = 250 PWM \n");
  }
  void loop(){ 
   if (Serial.available() > 0) {
    int cc = Serial.read(); //wait character
    
    switch (cc) {
     case '0':
          
          digitalWrite(3, LOW);
          break;
    case '1':
          
          digitalWrite(3, LOW);
          delay(100);        
          analogWrite( 3, 100); //PWM 100
          break;
     case '2':
          digitalWrite(3, LOW);
          delay(100);        
          analogWrite( 3, 150); //PWM 150
          break; 
     case '3':
          digitalWrite(3, LOW);
          delay(100);        
          analogWrite( 3, 250); //PWM 250
          break; 
    }
   }
  }
