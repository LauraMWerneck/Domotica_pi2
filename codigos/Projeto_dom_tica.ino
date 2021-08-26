
#define LED_Q1 13 // Q1 = quarto 1 (perto da cozinha)
#define LED_Q2 12 // Q2 = quarto 2 (perto da sala)
#define LED_S 11 // S = sala
#define LED_J 10 // J = jardim
#define PIR 9

#define Buzzer 2
#define MQ_2 A0
#include <Servo.h> //incluir a biblioteca de servo
Servo myservo;  //Inclusao do servo
int pos = 0;  //PosiÃƒÂ§ÃƒÂ£o zero para o servo

void setup() {
  /* ComunicaÃƒÂ§ÃƒÂ£o serial com o computador */
  Serial.begin(9600);
  while (!Serial);
  /* ConfiguraÃƒÂ§ÃƒÂ£o dos pinos como entrada ou saÃƒÂ­da */
  pinMode(LED_Q1, OUTPUT);
  pinMode(LED_Q2, OUTPUT);
  pinMode(LED_J, OUTPUT);
  pinMode(LED_S, OUTPUT);
  pinMode(PIR, INPUT);

  myservo.attach(8);  //Pino do servo+arduino
  myservo.write(0);  //Servo setado com valor zero

  pinMode(MQ_2, INPUT);
 pinMode(Buzzer, OUTPUT);

  Serial.flush();  //Limpando a memoria do serial
  Serial.println("Digite: \n 'a' para acender a luz do quarto 1 (prÃƒÂ³ximo ÃƒÂ  cozinha) \n 'A' para apagar a luz do quarto 1");
  Serial.println(" 'b' para acender a luz do quarto 2 (prÃƒÂ³ximo ÃƒÂ  sala) \n 'B' para apagar a luz do quarto 2");
  Serial.println(" 'c' para acender a luz da sala \n 'C' para apagar a luz da sala \n 'd' para apagar todas as luzes internas");
  Serial.println(" 'e' para arir o portÃƒÂ£o \n 'E' para fechar o portÃƒÂ£o");
}


void tarefa_1() { // Acender e apagar as luzes internas
  if (Serial.available() > 0) { //Teste se porta serial esta recebendo dados
    char tecla;
    tecla = Serial.read();
    if (tecla == 'a')
    {
      digitalWrite(LED_Q1, HIGH);
    }
    else if (tecla == 'A')
    {
      digitalWrite(LED_Q1, LOW);
    }
    else if (tecla == 'b')
    {
      digitalWrite(LED_Q2, HIGH);
    }
    else if (tecla == 'B')
    {
      digitalWrite(LED_Q2, LOW);
    }
    else if (tecla == 'c')
    {
      digitalWrite(LED_S, HIGH);
    }
    else if (tecla == 'C')
    {
      digitalWrite(LED_S, LOW);
    }
    else if (tecla == 'd')
    {
      digitalWrite(LED_Q1, LOW);
      digitalWrite(LED_Q2, LOW);
      digitalWrite(LED_S, LOW);
    }
    else if (tecla == 'e')
    {
      myservo.write(90);
      delay(500);
    }
    else if (tecla == 'E')
    {
      myservo.write(-180);
      delay(500);
    }
  }
  Serial.flush();
}

void tarefa_2() {
  int x = digitalRead(PIR);

  if (x == LOW)
  {
    digitalWrite(LED_J, LOW);
  }
  else
  {
    digitalWrite(LED_J, HIGH);
  }
}

void tarefa_3() {
  int valor_analogico = analogRead(MQ_2);
  Serial.print("Leitura: ");
  Serial.println(valor_analogico);
  if (valor_analogico > 300) {
    digitalWrite(Buzzer, LOW);
  }
  else {
    noTone(Buzzer);
    digitalWrite(Buzzer, HIGH);
  }
}

void loop() {

  tarefa_1();

  tarefa_2();

  tarefa_3();
}
