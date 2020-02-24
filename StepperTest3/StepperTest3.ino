int commandPos = 0;
int stepPos = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(10, OUTPUT); //Pulse
pinMode(9, OUTPUT); //Direction
pinMode(8, INPUT);
pinMode(7, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(8) == HIGH){
  commandPos = 50;
}
else if(digitalRead(8) == LOW){
  commandPos = 0;
}
while(stepPos < commandPos)
{
  digitalWrite(9, HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(10,LOW);
  delay(1);
}
while(stepPos > commandPos)
{
  digitalWrite(9, LOW);
  digitalWrite(10,HIGH);
  digitalWrite(10,LOW);
  delay(1);
}
}
