// By: Eliseu Coelho
//GitHub: @eliseu01
//LinkedIn: @eliseucoelhoo

//Circuito com 2 LEDs

//No último código,  nós fizemos um circuito onde 1 LED ficava ligando e desligando a cada segundo, ou seja, ficava piscando.
//Se, por acaso, você não viu, e quer olhar o projeto mais simples de fazer com Arduino, aqui está o link para você acessar e aprender como executá-lo: https://github.com/eliseu01/learning-arduino/blob/main/Blink/Blink.ino.
//Prosseguindo... Agora vamos trabalhar em circuito mais "complexo", onde será-lhe apresentado, diferente do código anterior, as variáveis. 

//Vou lhe mostrar aqui, um projeto onde 2 LEDs ficam piscando, simutaneamente, a cada segundo.

//Variáveis:

//As variáveis podem ser usadas para outros objetivos, mas, no nosso caso, ela será usada para otimizar o nosso tempo, nos tirando o problema de ter que lembrar do número de cada porta usada, precisando, apenas, lembrar o "nome" de cada uma.
//As variáveis tem uma estrutura simples:
//Primeiramente, dizemos o tipo de variável, ou seja, o tipo de valores que a variável vai receber.
//Após isso, denominamos o nome da variável. Aqui podemos usar a imaginação e colocar os nomes que nós quisermos, exceto nomes com palavras reservadas.
//Depois digitamos o sinal de igualdade "=".
//Posteriormente, colocamos o valor da variável, que neste caso colocaremos o número da porta a qual queremos nos referir.
//Dentre a linguagem usada para programar Arduino, para separar as funções, devemos colocar no final o "ponto e vírgula", especificamente, o ";".
//Pronto. É simples. Com o tempo essas informações ficarão mais claras em sua mente, mas vamos prosseguir por aqui...

//Aqui vamos aos exemplos práticos:

int led1 = 7; //No início desta linha você nota o "int", que significa "inteiro", que é o tipo desta variável. Após um espaço há o nome da variável "led1", esse é o nome que usaremos ao decorrer do código. Depois do sinal de igualdade tem o valor da variável que é o número da porta ao qual queremos nos referir, neste caso, a porta de número 7.
//Lembra que o tipo da variável é "inteiro"? 7 é um número do tipo inteiro, por isso o tipo da variável deve ser inteiro, no caso, "int". Entendeu?
//Resumindo os comentários da linha acima, toda vez que no código eu mencionar "led1", o Arduino vai "entender" que estou me referindo, na verdade, à porta 7.
//Obs: você pode colocar o nome que quiser, desde de que não haja palavras reservadas, e o valor que quiser, desde de que seja do mesmo tipo da variável. Se variável for do tipo inteiro, coloque um valor do tipo inteiro. 
//Se quiser entender melhor sobre os tipos de variáveis, visite o Documento de Referência Arduino em: https://www.arduino.cc/reference/pt/#variables.

int led2 = 12; //Aqui é mesma execução da linha acima, no entanto, com nome e valor diferentes.
//É importante ressaltar que não pode-se criar duas variáveis com o mesmo nome.

//Criadas nossas variáveis, vamos prosseguir.


// setup() é o nome da função que será executada, apenas, uma vez, quando o circuito começar.
void setup() {
 pinMode(led1, OUTPUT); //Aqui é o primeiro momento em que usufruimos das variáveis. Note que estou configurando "led1" como no modo OUTPUT(enviar). Colocar "led1" ou "7" neste caso, resultaria no mesmo.
 pinMode(led2, OUTPUT); //Esta linha tem o mesmo intuito da linha acima, entretanto, neste caso, configuramos outro LED.
}

// loop() é a função que será executada "infinitamente", literalmente um "loop".
void loop() {
 //Aqui vamos fazer com que os LEDs pisquem, ao mesmo tempo.
 digitalWrite(led1, HIGH);//Enviamos ao "led1" o HIGH, fazendo assim com que o led1 ligue.
 digitalWrite(led2, HIGH);//Enviamos ao "led2" o HIGH, fazendo assim com que o led2 ligue também.
 delay(2000);//Comandamos ao Arduino que ele "espere" 2 segundos(2000 milisegundos).
 digitalWrite(led1, LOW);//Enviamos ao "led1" o LOW, fazendo assim com que o led1 desligue.
 digitalWrite(led2, LOW);//Enviamos ao "led2" o LOW, fazendo assim com que o led2 desligue também.
 delay(2000);// Espera 2 segundos novamente. 
}
//Obs: destacar aqui que você pode usar a imaginação e construir a programção que quiser. Se preferir, por exemplo, que um LED ligue no momento que outro desligar, faça-o.
