void setup()
{
pinMode(3,OUTPUT);
pinMode(2, OUTPUT);
Serial.begin(9600);
}

void loop()
{

      
      int MotorSpeed = analogRead(A0);
      MotorSpeed= MotorSpeed*0.25;
      Serial.println(MotorSpeed);
      analogWrite( 3, MotorSpeed);
      
 }
  
    

