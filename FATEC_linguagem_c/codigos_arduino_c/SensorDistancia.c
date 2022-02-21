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
// disparar pulso ultrassônico
    pinMode(sensor, OUTPUT);
    digitalWrite(sensor, LOW);
    delayMicroseconds(2);
    digitalWrite(sensor, HIGH);
    delayMicroseconds(5);
    digitalWrite(sensor, LOW);
// O mesmo pino é usado para ler o sinal do PING:
// um pulso HIGH cuja a duração é em tempo (em microssegundos)
// desde o envio do ping até a receção do eco off de um objeto.
// medir tempo de ida e volta do pulso ultrassônico
    pinMode(sensor, INPUT);
    duracao = pulseIn(sensor, HIGH);
// calcular as distâncias em centímetros
// A velocidade do som é de 340 m / s ou 29.4 microssegundos
// por centímetro. O ping vai e volta, então para encontrar a
// distância do objeto, dividimos por 2 para obter a metade.
    cm = duracao / 29.4 / 2;
    Serial.print("Distancia em cm: ");
    Serial.println(cm);
// Acende o LED se distância > 100
    if(cm > 100) {
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, LOW);
    }
// Toca buzina se distância <= 100
    if(cm <= 100) {
        tone(buzina,1500);
// tone(buzina,1770,100);
    } else {
        noTone(buzina);
    }
    delay(1000);
}
