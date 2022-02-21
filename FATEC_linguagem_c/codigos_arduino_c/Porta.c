#include <Servo.h>
/*
* Por faltar controle no sensor de presen�a
*  na linha 45 troquei o "1" por "0"
*  para simular o movimento.
*/
//FUN��O Servo Motor
Servo servoMotor;
int porteira; //recebe 1(abrir) ou 0(fechar).
int abrir = 1; // valor para porta.
int fechar = 0; // valor para porta.
//FUN��O SENSOR
int sensor = 4;// Associa o SENSOR � porta 4.
int chkSensor;//Sensor desligado.
//FUN��O Bot�o que aciona/interrompe 'Modo Sensor'.
int botao = 8; // Associa o BOT�O � porta 8.
int status = 1; // Mostra o sinal da porta 8.

void setup() {
    Serial.begin(9600);
    //FUN��O SERVO MOTOR:
    servoMotor.attach(9);// Associa o Servo a porta 9.
    //FUN��O SENSOR:
    pinMode(sensor, INPUT);
    Serial.println("Sensor iniciado");
    //FUN��O Bot�o que aciona/interrompe 'Modo Sensor'.
    pinMode(botao, INPUT);
    digitalWrite(botao, HIGH);
    //Mensagem:
    Serial.println("Para trancar a porteira, acione o bot�o.");
    delay(3000);
}

void loop() {
    // FUN��O Bot�o que aciona/interrompe 'Modo Sensor'.
    status = digitalRead(botao);//L� o sinal da porta 8.
    Serial.print("Bot�o status: ");
    Serial.println(status);// Monitor serial mostra o valor.
    if (status == 1) { // Padr�o: mant�m acesso normal.
        Serial.println("Porta Liberada para acesso via sensor");
        chkSensor = digitalRead(sensor);// Verifica o sinal da porta 4.
        Serial.print("Valor do sensor: ");
        Serial.println(chkSensor);// Mostra o sinal recebido da porta 4.
        if (chkSensor == 0) {// 1 Detectou presen�a
            servoMotor.write(0); // Movimenta para 0 graus.Abre!
            delay(2000); // Tempo para atingir a posi��o.
            servoMotor.write(90); // Acabou de usar fecha a porteira.
            delay(500);
        }
        Serial.println("Ninguem a vista... ");
    } else {// SEN�O: foi acionado o bot�o, trancada a porteira, s�!
        Serial.println("Acesso bloqueado!");
    }
}
