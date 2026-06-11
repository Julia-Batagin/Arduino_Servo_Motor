//Importando a biblioteca do ServoMotor
#include <Servo.h>

//Instanciando um objeto chamado Servo
Servo servo;

//Crio uma função que inicializa os pinos e componentes
void setup ()
{
  Serial.begin(9600);  //Vel. de comunicação
  servo.attach(3);  //Pino onde ligamos o sinal do ServoMotor (pwn~)
}

//Crio uma função que se repete infinitamente
void loop () {
  for (int posicao = 0; posicao <= 180; posicao ++){
    //Criando variavel   //Condição      //Ação
 	servo.write(posicao);
  	Serial.println(posicao);
    delay(50);
  }
  for (int posicao = 180; posicao >= 0; posicao --){
    servo.write(posicao);
    Serial.println(posicao);
    delay(50);
    }
}
