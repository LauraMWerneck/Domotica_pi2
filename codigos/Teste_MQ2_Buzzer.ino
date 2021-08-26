/**********************************************************************************************************
  Instituto Federal de Educação, Ciência e Tecnologia de Santa Catarina-Campus Florianópolis
  Unidade Curricular: Projeto Integrador II
  Aluna: Laura Martin Werneck
  Semestre 2021.1
  Objetivo: Teste do funcionamento do sensor MQ2 e do buzzer.
************************************************************************************************************/
int Pinbuzzer = 2;
int PinA0 = A0;

//int leitura_sensor = 300;

void setup() {
  pinMode(PinA0, INPUT);
  pinMode(Pinbuzzer, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int valor_analogico = analogRead(PinA0);
  Serial.print("Leitura: ");
  Serial.println(valor_analogico);
  if (valor_analogico > 300) {
    digitalWrite(Pinbuzzer, LOW);
  }
  else{
    noTone(Pinbuzzer);
    digitalWrite(Pinbuzzer, HIGH);
  }
  delay(1000);
}
