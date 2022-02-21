#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int sensorPresenca = 8;
int chkSensor;// Sensor desligado.
int ledG = 9;
int ledB = 10;
int ledR = 11;
const int sensorSonico = 12;
long duracao, cm;
# define buzina  13;

void setup() {
    pinMode(ledR, OUTPUT);
    pinMode(ledG, OUTPUT);
    pinMode(ledB, OUTPUT);
    Serial.begin(9600);
    lcd.begin(16, 2);
    pinMode(sensorPresenca, INPUT);
    Serial.println("Sensor de Presença iniciado");
    Serial.println("Sensor Ultrassonico iniciado");
    delay(500);

}
void loop() {

//Sensor Ultrassônico:
// Disparar pulso ultrassônico:
    pinMode(sensorSonico, OUTPUT);
    digitalWrite(sensorSonico, LOW);
    delayMicroseconds(2);// O mesmo pino é usado para ler o sinal do PING:
    digitalWrite(sensorSonico, HIGH); // um pulso HIGH cuja a duração é em tempo (em microssegundos)
    delayMicroseconds(5);// desde o envio do ping até a receção do eco off de um objeto.
    digitalWrite(sensorSonico, LOW);
// medir tempo de ida e volta do pulso ultrassônico
    pinMode(sensorSonico, INPUT);
    duracao = pulseIn(sensorSonico, HIGH);
// calcular as distâncias em centímetros
// A velocidade do som é de 340 m / s ou 29.4 microssegundos
// por centímetro. O ping vai e volta, então para encontrar a
// distância do objeto, dividimos por 2 para obter a metade.
    cm = duracao / 29.4 / 2;
    Serial.print("Distancia em cm: ");
    Serial.println(cm);

// Acende o LED se distância > 100
    if(cm > 100) {
        digitalWrite(ledB, HIGH);//verde ok!
        digitalWrite(ledG, HIGH);
    } else {
        digitalWrite(ledR, HIGH);//vermelho perigo!
    }
// Toca buzina se distância <= 100
    if(cm <= 100) {
        tone(buzina,1500);
        // tone(buzina,1770,100);
    } else {
        noTone(buzina);
    }
    delay(1000);

    lcd.clear();
    delay(1000);
    chkSensor = digitalRead(sensorPresenca);
    Serial.print("Valor do sensorPresenca: ");
    Serial.println(chkSensor);
//Verifica se ocorreu detecção de movimentos
    if (chkSensor == 1) { //detectou presença
        digitalWrite(ledR, HIGH);
        digitalWrite(ledG, HIGH);
        lcd.setCursor(3, 0);
        lcd.print("ATENÇÃO");
        lcd.setCursor(3, 1);
        lcd.print(" alerta de presença!");
        delay(2000);
    } else {
        digitalWrite(ledB, HIGH);
        lcd.setCursor(3, 0);
        lcd.print("TUDO CALMO");
        lcd.setCursor(0, 1);
        lcd.print(" ninguem a vista...");
        delay(2000);
    }
}
