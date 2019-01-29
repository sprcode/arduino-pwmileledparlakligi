int led=3;
void setup() {
pinMode(led,OUTPUT);
}
void loop() {
analogWrite(led,5);
delay(100);
analogWrite(led,15);
delay(100);
analogWrite(led,25);
delay(100);
analogWrite(led,35);
delay(100);
analogWrite(led,45);
delay(100);
}
