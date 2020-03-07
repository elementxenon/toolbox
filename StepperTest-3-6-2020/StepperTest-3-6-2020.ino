int stepCNT = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(10, OUTPUT); //Pulse
pinMode(9, OUTPUT); //Direction
pinMode(4, INPUT); //Microswitch 2
pinMode(5, INPUT); // Microswitch 1-- zeroing
pinMode(3, INPUT); // Input SW

}

void loop() {
  // put your main code here, to run repeatedly:
while(digitalRead(5) == LOW and digitalRead(5 == HIGH)){
  digitalWrite(10, HIGH);
  delay(10);
  digitalWrite(10, LOW);
}
}
