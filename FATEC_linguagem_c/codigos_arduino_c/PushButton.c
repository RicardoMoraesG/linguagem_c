int botao = 8;
int led = 3;
int status = 0;
void setup() {
    pinMode(led, OUTPUT);
    pinMode(botao, INPUT);
    digitalWrite(botao, HIGH);
    Serial.begin(9600);
}
void loop() {
    status = digitalRead(botao);
    Serial.println(status);
    if (status != 1) {
        digitalWrite(led, HIGH);
        delay(2000);
    } else {
        digitalWrite(led, LOW);
    }
}
