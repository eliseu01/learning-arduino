// By: Eliseu Coelho
//GitHub: @eliseu01

//Blink = Piscar
//Acredita-se que fazer um LED piscar seja o "Hello World" do Arduino, ou seja, o circuito mais fácil de ser executado com Arduino. E que deve ser o primeiro para iniciantes.

//O objetivo deste sketch é fazer o LED que é integrado no Arduino piscar.

//Observações:
//Para se referir ao pino que é on-board(integrado) no Arduino nós usamos o LED_BUILTIN, a constante do LED imbutido. Lembrando que, o LED_BUILTIN sempre está conectado a uma porta digital, portanto, se enviares um valor para LED_BUILTIN, também estarão enviando para porta que está conectada a ele.
//Na maioria das vezes, o LED_BUILTIN é conectado a porta digital 13. Portanto se você trocar a constante LED_BUILTIN por "13", e vice-versa, o resultado será o mesmo.

//Para mais informações sobre este circuito, visite o artigo da própria Arduino: https://docs.arduino.cc/built-in-examples/basics/Blink.

//Iniciando...

// setup() é o nome da função que será executada, apenas, uma vez, quando o circuito começar.
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); //Aqui definimos a constante LED_BUILTIN como pino no modo OUTPUT(enviar).
}

// loop() é a função que será executada "infinitamente", literalmente um "loop".
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); //Aqui enviamos, para o pino definido no modo OUTPUT, o valor HIGH. Que no caso, acende o LED.
  delay(1000);//O Arduino "aguarda" 1000 milisegundos(1 segundo) para executar a próxima função. Ou melhor, o LED permanece ligado por 1 segundo.
  digitalWrite(LED_BUILTIN, LOW);//Enviamos LOW para o pino LED_BUILTIN, o que desliga o LED.
  delay(1000);//O LED continua desligado por 1 segundo.
}
