
#include <dht11.h>
dht11 DHT;
#define DHT11_PIN 4 //Digitalpin 4 of arduino
 
void setup(){
  Serial.begin(9600);
  
}
 
void loop(){
    // READ DATA
 DHT.read(DHT11_PIN); 
 // DISPLAY DATA
  Serial.print("Humidity:");
  Serial.print(DHT.humidity); // in percent (%)
  Serial.print(",\t");
  Serial.print("Temperature:");
  Serial.println(DHT.temperature); // in degrees celsius (ºC)
  
  delay(1000); 
}
