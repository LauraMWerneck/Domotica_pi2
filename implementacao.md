# Implementação
Esta parte do projeto baseou-se na construção da maquete que representa-rá a casa do projeto, além dos testes individuais dos componentes e o entendimento do funcionamento destes.

## Construção da Maquete
Para a construção da maquete, foi usado a planta apresentada na parte da concepção do projeto como base. Dessa forma foram usadas placas de isopor para criar sua estrutura, além de tintas, papeis coloridos e plantas artificiais para dar um ar mais realístico. A seguir estão fotos da maquete finalizada:
###### Figura 1 - Maquete vista lateral.
![Figura 1: Maquete vista lateral.](./figuras/Maquete_vista_lateral.jpg)
###### Figura 2 - Maquete vista superior.
![Figura 2: Maquete vista superior.](./figuras/Maquete_vista_superior.jpg)

## Teste dos Componentes
Nessa etapa, foram testados individualmente os componentes e apresentados suas principais características, para assim se ter um bom entendimento do funcionamento de cada um. Além disso, será apresentada a representação das ligações realizadas fisicamente por uma representação digital feita utilizando o *softwere* *Fritzing*.
### Sensor de Presença(PIR) e LEDs
O PIR é um sensor que capta a radiação infravermelha de um corpo e assim aciona o que for desejado. Ele é um sensor capaz de detectar o movimento de corpos que emitam calor e que estejam em seu campo de alcance. A sensibilidade do alcance e do tempo de duração do sinal podem ser ajustados no próprio sensor.

Para o teste desse sensor ele e dois LEDs distintos foram ligados à placa do Arduino. Quando o sensor estiver desativado(sem movimento) o LED vermelho está ativo e o branco desativado e, quando o sensor detecta movimento, o LED branco ativa e o vermelho desativa. Isso foi feito conforme o esquemático abaixo e segundo o código apresentado a seguir:
###### Figura 3 - Esquemático teste PIR com LEDs.
![Figura 3: Esquemático teste PIR com LEDs.](./figuras/Teste_PIR_LEDs.png)

### MQ2 e Buzzer
O sensor MQ2 é um sensor que consegue identificar a presença de gases infumáveis ou fumaça em um ambiente. Quando ele detecta esses gases ele envia um sinal, que pode ser tanto analógico como digital, ao microcontrolador conectado, nesse caso o Arduino. No caso desse projeto, sempre que o sensor detectar uma quantidade limite de gás ele aciona um buzzer.
O buzzer é um dispositivo piezoelétrico reverso, o qual funciona a partir de uma diferença de potencial aplicada em seus terminais, com uma determinada frequência, dessa forma a célula dentro dele irá vibrar na mesma frequência emitindo um som.

Para o teste do sensor MQ2 utilizou-se ao mesmo tempo, o Buzzer, pois esse emite um sinal sonoro quando o sensor MQ2 indica que as concentrações de gases passaram do valor  limite. O esquemático abaixo representa como foi montado os componentes para teste e logo depois o código utilizado:

###### Figura 4 - Esquemático teste MQ2 e Buzzer.
![Figura 4: Esquemático teste MQ2 e Buzzer.](./figuras/Teste_MQ2_Buzzer.png)
##### **OBS:** Nesse esquemático usou-se o sensor MQ4 pois era o único disponível no programa utilizado, mas no teste real utilizou-se o MQ2.

### Servo Motor
O Servo Motor é em grande parte utilizado para controle de movimento que exigem posicionamento de alta precisão. Eles são motores comuns que possui acoplado a ele um sensor de velocidade e um controlador. Ele trabalha com servo-mecanismo que usa o feedback de posição para controlar a velocidade e a posição final do motor.

Para o seu teste ele foi ligado ao Arduino conforme a imagem a seguir e foi usado o código abaixo:
###### Figura 5 - Esquemático teste Servo Motor.
![Figura 5: Esquemático teste Servo Motor.](./figuras/Teste_Servo.png)

## Referências

OLIVEIRA, Euler. **Como usar com Arduino - Sensor PIR (Detector) de Movimento.** Disponível em: <https://blogmasterwalkershop.com.br/arduino/como-usar-com-arduino-sensor-pir-detector-de-movimento>. Acesso em: 16 ago. 2021.

DOS REIS, Fáio. **Como funciona um Sensor de Movimento PIR – Passive Infrared.** Disponível em: <http://www.bosontreinamentos.com.br/eletronica/como-funciona-um-sensor-de-movimento-pir-passive-infrared/>. Acesso em: 16 ago. 2021.

PORTA, Leonardo Dalla. **SENSOR DE GÁS ARDUINO MQ-2 PARA GASES INFLAMÁVEIS E FUMAÇA.** Disponível em: <https://www.usinainfo.com.br/blog/sensor-de-gas-arduino-mq-2-para-gases-inflamaveis-e-fumaca/>. Acesso em: 16 ago. 2021.

BEZERRA, Victor Hugo Igino.**Buzzer ativo ou passivo. Qual é o ideal para o seu projeto?** Disponívem em: <https://www.adrobotica.com/buzzer-ativo-ou-passivo-qual-e-o-ideal-para-o-seu-projeto/>. Acesso em: 16 ago. 2021.

SILVEIRA, Cristiano Bertulucci.**Servo Motor: Veja como Funciona e Quais os Tipos.** Dispnível em: <https://www.citisystems.com.br/servo-motor/>. Acesso em: 16 ago. 2021.


