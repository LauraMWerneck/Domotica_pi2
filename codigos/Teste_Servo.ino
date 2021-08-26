/**********************************************************************************************************
  Instituto Federal de Educação, Ciência e Tecnologia de Santa Catarina-Campus Florianópolis
  Unidade Curricular: Projeto Integrador II
  Aluna: Laura Martin Werneck
  Semestre 2021.1
  Objetivo: Teste do funcionamento do servo motor.
************************************************************************************************************/
#include <Servo.h> 
 
Servo myservo; 
 
int pos = 0; 
 
void setup() 
{ 
  myservo.attach(8); 
} 
  
void loop() 
{ 
  for(pos = 0; pos < 180; pos += 1) 
  {                                   
    myservo.write(pos); 
    delay(6); 
  } 
  
  for(pos = 180; pos>=1; pos-=1) 
  {                                
    myservo.write(pos); 
    delay(6); 
  }  
} 
