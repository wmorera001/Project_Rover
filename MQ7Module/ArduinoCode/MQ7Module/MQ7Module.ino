//CO burn in

//Karen Nisley under Non-Commercial Share-Alike Attribution CC.


const int sensor = A0;        //sensor inputs to Arduino
int sensorValue = 0;          //initial value of sensorZero's input
const int sensorControl = 5;  //PWM output to fet   
int iterations = 0;


void setup() {    
  pinMode(sensorControl, OUTPUT);
  Serial.begin(9600); 
  Serial.println("We're gonna take data!");
  Serial.println("Sensor, itirations");
  digitalWrite(sensorControl, HIGH);
  delay(300000);        //wait 5 minutes for preheat
}


void loop(){
  while(iterations < 144){
  //turn on fets
  digitalWrite(sensorControl, HIGH);
  
  //wait for heat
  delay(60000);           //wait for 60 seconds of heat
 
  sensorValue = analogRead(sensor);

  iterations = iterations ++;
  // print the results to the serial monitor:                       
  Serial.print(sensorValue);
  Serial.print(", ");
  Serial.println(iterations);
  digitalWrite(sensorControl, LOW);
  delay(90000);                      //wait for 90 seconds of cool
  }
  
}
