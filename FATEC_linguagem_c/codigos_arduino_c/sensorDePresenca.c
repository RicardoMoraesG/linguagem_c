
int ledvd = 6;
int ledvm = 7;
int sensor = 4;
int chkSensor = 0; //sensor desligado
void setup() {
    Serial.begin(9600);
    pinMode(ledvd,OUTPUT);
    pinMode(ledvm,OUTPUT);
    pinMode(sensor,INPUT);
    Serial.println("Sensor iniciado");
    delay(500);
}
void loop() {
    chkSensor = digitalRead(sensor);
    Serial.print("Valor do sensor: ");
    Serial.println(chkSensor);
//Verifica se ocorreu detecção de movimentos
    if (chkSensor == 1) { //detectou presença
        digitalWrite(ledvm, HIGH);
        digitalWrite(ledvd, LOW);
    } else {
        digitalWrite(ledvm, LOW);
        digitalWrite(ledvd, HIGH);
    }
    delay(2000);
}
