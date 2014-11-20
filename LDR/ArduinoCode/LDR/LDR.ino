
void setup() 
{
Serial.begin(9600); 
pinMode(3,OUTPUT); 
}

void loop() 
{ 
int foto = analogRead(A5);
//Maximum sensor value and convert it
int conversion = 690 - foto;

if ( conversion < 0)
conversion = conversion * -1; 
if (conversion > 255)
conversion = 255;

Serial.print("Foto :");
Serial.print(foto);

//print conversion value
Serial.print("\t Conv : ");
Serial.print(conversion);
Serial.println("");
//Analog write from 0 to 255 in PWM 
analogWrite(3, conversion);
delay(100);
}
