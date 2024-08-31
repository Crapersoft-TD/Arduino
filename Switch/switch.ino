const int pinOFswitch = 3;  
const int LED = 8;  
void setup( ) {  
  pinMode(pinOFswitch, INPUT);  
  pinMode(LED, OUTPUT);  
}  
void loop( )   
{  
  int ValueOFswitch;  
  ValueOFswitch = digitalRead(pinOFswitch);  
  if (ValueOFswitch == HIGH)   
  {  
    digitalWrite(LED, HIGH);  
    delay(500);  
  }  
    
  else   
  {  
    digitalWrite(LED, LOW);  
    delay(500);  
  }  
} 
