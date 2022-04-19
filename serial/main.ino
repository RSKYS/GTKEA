// Just a test for now

unsigned short int state, led = 9;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    for (state = 0; state <= 255; state += 10) {
        analogWrite(led, state);
    }

    for (; state >= 0; state -= 5) {
        analogWrite(led, state);
    }
}
