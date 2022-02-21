#include <Servo.h>
Servo servoMotor;
int val;
int ChaveEsquerda=3; //Pino a ser ligado na chave esquerda
int ChaveCentral=4; //Pino a ser ligado na chave central
int ChaveDireita=5; //Pino a ser ligado na chave direita
void setup() {
// Associa o Servo a porta 9
    servoMotor.attach(9);
//Define o botão como entrada
    pinMode(ChaveEsquerda, INPUT);
    digitalWrite(ChaveEsquerda, HIGH);
    pinMode(ChaveCentral, INPUT);
    digitalWrite(ChaveCentral, HIGH);
    pinMode(ChaveDireita, INPUT);
    digitalWrite(ChaveDireita, HIGH);
}
void loop() {
//Le o valor do botão Esquerdo
    val=digitalRead(ChaveEsquerda);
//Caso a chave seja pressionada, movimenta o servo
    if(val!=1) {
        servoMotor.write(60); //Movimenta para 60 graus
        delay(15); //Delay para atingir a posição
    }
    val=digitalRead(ChaveCentral);
    if(val!=1) {
        servoMotor.write(90);
        delay(15);
    }
    val=digitalRead(ChaveDireita);
    if(val!=1) {
        servoMotor.write(120);
        delay(15);
    }
}

