# Implementação
O intuito desse projeto é a construção do protótipo de uma casa, com o objetivo de automatizar algumas funcionalidades dela.
Então, nesta parte do projeto foi feita a criação do sistema a partir do *design*. Para isso foi realizado a integração dos componentes e um único código com todas as partes, além do posicionamento dos componentes na maquete em seus devidos lugares.

Na etapa do *design* foram testados os componentes a serem usados. É preciso destacar que em alguns casos fora necessário a mudança do código ou de alguns ajustes para que eles funcionassem corretamente. Podemos citar como exemplo o sensor PIR, o qual foi necessário ajustar a sua sensibilidade e o seu tempo de resposta, além disso, ainda foi necessário ajustar o código usado para assim funcionar corretamente; outro caso foi o do código contendo o buzzer e o sensor MQ2, no caso deste o código para ativação do buzzer não apresentava o funcionamento esperado a intervenção dos professores foi necessária para clarear dúvidas referentes as diferenças de acionamento entre buzzers ativos e passivos, e as bibliotecas em C utilizadas para tais finalidades.

Após entender o funcionamento de cada componente e de testá-los e ser comprovado o funcionamento correto destes, foi possível pensar em sua implementação específica para as finalidades da casa automatizada. Em decorrência disso, seus códigos foram alterados para funcionarem de acordo com cada atividade prevista para a automação da casa, que no fim foram:
* O sensor de presença foi ajustado para acender apenas um LED no jardim caso capte movimentos;
* Para os LEDs dos quartos e da sala foi criado um código para que estes acendam por um comando do computador;
* Foi ajustado o código do servo motor da cancela na entrada para ela abrir 90° para cima por um comando do computador e fechar com outro comando;
* No caso do sensor de gás o código continuou o mesmo do teste, o qual aciona o buzzer caso seja detectado grandes concentrações de gases inflamáveis.

Após as alterações feitas e os testes ao se incluir cada parte em um único programa obteve-se o código que pode ser acessado [aqui](./codigos/Projeto_dom_tica.ino). Para realizar as tarefas descritas acima foi criado o seguinte menu:

###### Figura 1 - Menu de ações.
![Figura 1: Menu de ações.](https://i.imgur.com/D1LTRpI.jpg)

Para a ligação dos componentes na maquete foi feito um teto mais resistente o qual pudesse servir de base para o Arduino como também para encaixar os LEDs e o sensor de gás. Essa base e as ligações dos componentes podem ser observados como na figura a seguir:
###### Figura 2 - Teto base para o Arduino e as ligações dos componentes.
![Figura 2: Teto base para o Arduino e as ligações dos componentes.](./figuras/Ligacoes_componentes_e_base.jpg)


O protótipo final da casa ficou como seguem as imagens a seguir:
###### Figura 3 - Vista frontal da maquete.
![Figura 3: Vista frontal da maquete.](https://i.imgur.com/ox9CdJU.jpg)

###### Figura 4 - Vista dos quartos.
![Figura 4: Vista dos quartos.](https://i.imgur.com/5ZIYqUA.jpg)

###### Figura 5 - Vista da garagem.
![Figura 5: Vista da garagem.](https://i.imgur.com/UNlwVRz.jpg)

Nota-se que nestas fotos é possível ver a localização de cada um dos componentes que foram ditos necessário para a criação desse projeto, e para recapitular e confirmar que foi feito segundo o que se pretendeu no início do projeto temos:
* LEDs nos quartos e na sala com acionamento remoto;
* Sensor de presença no jardim;
* Sensor de gás na cozinha;
*Servo motor usando em uma cancela para permitir ou não a entrada de veículos.




