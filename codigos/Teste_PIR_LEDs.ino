/**********************************************************************************************************
  Instituto Federal de Educação, Ciência e Tecnologia de Santa Catarina-Campus Florianópolis
  Unidade Curricular: Projeto Integrador II
  Aluna: Laura Martin Werneck
  Semestre 2021.1
  Objetivo: Teste do sendor PIR com LEDs.
************************************************************************************************************/
#define led 7
#define led2 5
#define pirSensor 9

void setup() { 
 Serial.begin(9600);
  pinMode(pirSensor, INPUT); 
  pinMode(led,OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  
int x= digitalRead(pirSensor);

  if(x==LOW)
  {
    digitalWrite(led,LOW);
    digitalWrite(led2, HIGH);
    Serial.println(x);
  }
  else
  {
    digitalWrite(led,HIGH);
    digitalWrite(led2, LOW);
    Serial.println(x);
  }
}
