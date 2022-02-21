//Define as postas para os componentes
# define buzina 9
# define led 10
const int sensor = 12;
long duracao, cm;
void setup() {
    Serial.begin(9600);
    Serial.println("Lendo dados do sensor...");
    pinMode(led, OUTPUT);
    }
void loop() {
// disparar pulso ultrass�nico
    pinMode(sensor, OUTPUT);
    digitalWrite(sensor, LOW);
    delayMicroseconds(2);
    digitalWrite(sensor, HIGH);
    delayMicroseconds(5);
    digitalWrite(sensor, LOW);
// O mesmo pino � usado para ler o sinal do PING:
// um pulso HIGH cuja a dura��o � em tempo (em microssegundos)
// desde o envio do ping at� a rece��o do eco off de um objeto.
// medir tempo de ida e volta do pulso ultrass�nico
    pinMode(sensor, INPUT);
    duracao = pulseIn(sensor, HIGH);
// calcular as dist�ncias em cent�metros
// A velocidade do som � de 340 m / s ou 29.4 microssegundos
// por cent�metro. O ping vai e volta, ent�o para encontrar a
// dist�ncia do objeto, dividimos por 2 para obter a metade.
    cm = duracao / 29.4 / 2;
    Serial.print("Distancia em cm: ");
    Serial.println(cm);
// Acende o LED se dist�ncia > 100
    if(cm > 100) {
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, LOW);
    }
// Toca buzina se dist�ncia <= 100
    if(cm <= 100) {
        tone(buzina,1500);
// tone(buzina,1770,100);
    } else {
        noTone(buzina);
    }
    delay(1000);
}
