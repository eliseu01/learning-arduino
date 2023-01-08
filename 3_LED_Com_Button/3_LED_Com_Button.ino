// By: Eliseu Coelho
//GitHub: @eliseu01
//LinkedIn: @eliseucoelhoo

//LED_Com_Button - Led com botão(push button)
//Já vemos muito em nosso cotidiano o uso de botões para a execução de certas tarefas, como no controle de TV, no mouse, no micro-ondas e etc. É notório que os botões estão, atualmente, bastante presentes na vida do ser humano.
//Hoje, vamos fazer um circuito simples com LED que liga, enquanto um botão está pressionado, e desliga, enquanto o botão não estiver pressionado. Para enterdemos um pouco como funciona estes tipos de circuitos.


//Diferentes de em circuitos anteriores, agora vamos usar o botão e, além disso, funções condicionais.
//Funções condicionais são aquelas funções que vão ser executadas, apenas, quando uma condição for verdadeira.
//Por exemplo, "se eu apertar o botão, o LED acende", o "se" no começo da frase expressa a ideia de condição, "eu apertar o botão" essa parte é a condição, e "o LED acende" é o que acontece se a condição for atendida.
//Se quiser entender mais sobre funções/estruturas condicionais, visite e leia este artigo: https://www.treinaweb.com.br/blog/estruturas-condicionais-e-de-repeticao.

//O botão que usaremos aqui, vai ser um Push Button(o que pode ser chamado também de Chave Táctil).
//O push button funciona de uma maneira bem simples, resumidamente, ele é um tipo de interruptor pulsador, ou seja, conduz somente quando está pressionado.
//Ele possui 4 terminais, 2 "em cima" e 2 "em baixo". Quando você pressiona o botão você fecha o circuito, permitindo a passagem de corrente, por todos os terminais.

//Para mais informações e melhor compreendimento deste circuito, tanto da parte de software quando da de hardware, recomendo, fortemente, que você visite e leia este artigo: https://www.blogdarobotica.com/2020/09/28/ligar-e-desligar-led-com-botao-push-button-chave-tactil-com-arduino/.
//*O mesmo artigo que me ensinou a usar o Push Button.


//Começando...

int ledPin = 11; // Aqui criamos uma variável para armazenar o número da porta ligada ao LED que vamos acender. Se quiseres ligar o LED_BUILTIN edite o número para 13.
int buttonPin =  7; // Neste caso, 7 é a porta que diferente de em outros circuitos vai receber valores em vez de enviar. Na maioria das vezes, aqui vamos usar as portas digitais, e um detalhe de uma porta digital é que ela só pode enviar/receber dois tipos de valores, HIGH e LOW.
int estadoButton; //Essa variável não está ligada a nenhuma porta, pois não é esse o seu objetivo. Ela foi criada para armazenar o valor HIGH ou LOW, que vai indicar se o botão está sendo pressionado ou não.


// setup() é o nome da função que será executada, apenas, uma vez, quando o circuito começar.
void setup(){
  pinMode(ledPin,OUTPUT);// Configuramos a porta do LED para OUTPUT(enviar).
  pinMode(buttonPin, INPUT);// Configuramos a porta do botão para INPUT(receber), se pressiornarmos o botão, a porta vai receber HIGH, e se não estivermos pressionando, a porta vai receber LOW. Esta estrutura para receber valores é executada de acordo com o seu Hardware, a parte física do seu circuito. Então a porta pode receber os valores que você quiser nas situações que você desejar.
}

// loop() é a função que será executada "infinitamente", literalmente um "loop".
void loop(){
  estadoButton = digitalRead(buttonPin); //digitalRead() é função que "ler" a porta, então se porta estiver recebendo HIGH, a função vai ler HIGH, e a variável estadoButton terá HIGH como valor. E um detalhe é que este tipo de variável muda quando você quiser, então quando a função ler LOW, a variável vai mudar para LOW sem nenhum problema.
  
  //É aqui que apresentamos uma função condicional, o "IF"(que significa em português "se", aquilo que expressa condição).
  if(estadoButton == HIGH){ //Traduzindo... Se o que estiver dentro do parênteses for verdadeiro, execute o que estar entre as chaves. Se não for verdadeiro, não executa.
    digitalWrite(ledPin, HIGH); // Envia HIGH para o LED, ou seja, acende o LED.
    delay(100);// O circuito aguarda 100 milissegundos(0,1 segundo) para continuar.
  }
  //"ELSE" é outra função condicional que significa "se não". Então, SE NÃO for verdadeiro o que estiver no parênteses do 'if', então vai executar o que estiver no 'else'.
  else{
    digitalWrite(ledPin, LOW);//Envia LOW para o LED, ou seja, desliga o LED.
  }
}

//Se quiseres conversar e tirar dúvidas comigo, me envie uma DM no Instagram: @eliseucoelhoo
