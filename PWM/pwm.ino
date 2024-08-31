void setup()  
{  
  pinMode(10, OUTPUT); // the declared pin must be among the PWM pins.  
}  
void loop()  
{  
  analogWrite(10, 255); // 255 is the highest value.  
  //We can modify the value as per the required brightness.  
  delay(1000);   
  analogWrite(10, 0);  
  delay(1000); // time delay of 1 second or 1000 milliseconds  
}  
