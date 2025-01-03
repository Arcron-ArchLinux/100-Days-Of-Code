const int Pin=2;
void setup()
{
pinMode(Pin, INPUT);
Serial.begin(9600);
}
void loop()
{
int sensorValue = digitalRead(Pin);
if(sensorValue==LOW)
{
Serial.println("no Object");
delay(500);
}
else
{
Serial.println("Object Detected");
delay(500);
}
}
  
