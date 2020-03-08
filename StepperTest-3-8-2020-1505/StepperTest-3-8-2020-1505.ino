int mode = 0;
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
if(digitalRead(5) == HIGH && mode == 0){
  digitalWrite(9, HIGH); //Motor direction pin high
  for( int stepcount = 0; stepcount > 50; stepcount++){ //motor turns 50 steps
    digitalWrite(10, HIGH);
    delay(1);
    digitalWrite(10, LOW);
  }
  mode = 1;
}
if(digitalRead(5) == LOW && mode == 1){
  digitalWrite(9, LOW); //Motor direction pin high
  for( int stepcount = 0; stepcount > 50; stepcount++){ //motor turns 50 steps
    digitalWrite(10, HIGH);
    delay(1);
    digitalWrite(10, LOW);
  }
  mode = 0;
}

}
