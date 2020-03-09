bool mode = false;
bool fwdlatch = false;
bool revlatch = false;
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
if(mode == false && digitalRead(3) == HIGH && fwdlatch != true){
  digitalWrite(9, HIGH); //Motor direction pin high
  for( int stepcount = 0; stepcount < 50; stepcount++){ //motor turns 50 steps
    digitalWrite(10, HIGH);
    delay(1);
    digitalWrite(10, LOW);
  }
  mode = true;
  fwdlatch = true;
  delay(1000);
  
}
else if( mode == true && digitalRead(3) != HIGH && revlatch != true){
  digitalWrite(9, LOW); //Motor direction pin high
  for( int stepcount = 0; stepcount < 50; stepcount++){ //motor turns 50 steps
    digitalWrite(10, HIGH);
    delay(1);
    digitalWrite(10, LOW);
  }
  mode = false;
  revlatch = true;
  delay(1000);
}

}
