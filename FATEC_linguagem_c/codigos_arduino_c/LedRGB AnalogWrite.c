//aula 7 - led RGB
//Define as portas para os componentes
int ledG = 9;
int ledB = 10;
int ledR = 11;
void setup() {
    pinMode(ledR, OUTPUT);
    pinMode(ledG, OUTPUT);
    pinMode(ledB, OUTPUT);
}
//altera as cores
void loop() {
    int g = 0;
    int b = 0;
    int r = 0;
    for (g = 0; g < 255; g += 5) {
        analogWrite(ledG, g);
        if(r > 0) {
            r -= 5;
            analogWrite(ledR, r);
        }
    }
    delay(2000);
    for (b = 0; b < 255; b++) {
        analogWrite(ledB, b);
        g--;
        analogWrite(ledG, g);
    }
    delay(2000);
    for (r = 0; r < 255; r += 2) {
        analogWrite(ledR, r);
        g--;
        analogWrite(ledG, g);
        b -= 10;
        analogWrite(ledB, b);
    }
    delay(2000);
}
