#include <Servo.h>
/*
* Por faltar controle no sensor de presença
*  na linha 45 troquei o "1" por "0"
*  para simular o movimento.
*/
//FUNÇÃO Servo Motor
Servo servoMotor;
int porteira; //recebe 1(abrir) ou 0(fechar).
int abrir = 1; // valor para porta.
int fechar = 0; // valor para porta.
//FUNÇÃO SENSOR
int sensor = 4;// Associa o SENSOR à porta 4.
int chkSensor;//Sensor desligado.
//FUNÇÃO Botão que aciona/interrompe 'Modo Sensor'.
int botao = 8; // Associa o BOTÃO à porta 8.
int status = 1; // Mostra o sinal da porta 8.

void setup() {
    Serial.begin(9600);
    //FUNÇÃO SERVO MOTOR:
    servoMotor.attach(9);// Associa o Servo a porta 9.
    //FUNÇÃO SENSOR:
    pinMode(sensor, INPUT);
    Serial.println("Sensor iniciado");
    //FUNÇÃO Botão que aciona/interrompe 'Modo Sensor'.
    pinMode(botao, INPUT);
    digitalWrite(botao, HIGH);
    //Mensagem:
    Serial.println("Para trancar a porteira, acione o botão.");
    delay(3000);
}

void loop() {
    // FUNÇÃO Botão que aciona/interrompe 'Modo Sensor'.
    status = digitalRead(botao);//Lê o sinal da porta 8.
    Serial.print("Botão status: ");
    Serial.println(status);// Monitor serial mostra o valor.
    if (status == 1) { // Padrão: mantêm acesso normal.
        Serial.println("Porta Liberada para acesso via sensor");
        chkSensor = digitalRead(sensor);// Verifica o sinal da porta 4.
        Serial.print("Valor do sensor: ");
        Serial.println(chkSensor);// Mostra o sinal recebido da porta 4.
        if (chkSensor == 0) {// 1 Detectou presença
            servoMotor.write(0); // Movimenta para 0 graus.Abre!
            delay(2000); // Tempo para atingir a posição.
            servoMotor.write(90); // Acabou de usar fecha a porteira.
            delay(500);
        }
        Serial.println("Ninguem a vista... ");
    } else {// SENÃO: foi acionado o botão, trancada a porteira, sô!
        Serial.println("Acesso bloqueado!");
    }
}
