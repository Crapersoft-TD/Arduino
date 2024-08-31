void setup()  
{  
  pinMode(6, OUTPUT); // the declared pin must be among the PWM pins.  
}  
void loop()  
{  
  analogWrite(6, 255); // brightness increases as value increases  
  delay(1000);   
  analogWrite(6, 180);// brightness level  
  delay(1000);   
  analogWrite(6, 80);   
  delay(1000);   
  analogWrite(6, 20); // brightness decreases as value decreases  
  delay(1000);   
} 
