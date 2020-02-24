void setup() {
  // put your setup code here, to run once:
pinMode(10, OUTPUT); //Pulse
pinMode(9, OUTPUT); //Direction
pinMode(8, INPUT);
pinMode(7, INPUT);
}
void loop() {
if(digitalRead(8) == HIGH){
 
      turnFWD();
 }
}

void turnFWD()
{
  digitalWrite(9, LOW);
  for(int stepcount = 0; stepcount < 1; stepcount++){
  digitalWrite(10, HIGH); //Turn pin 10 ON
  delay(50); // wait 1 miliseconds
  digitalWrite(10, LOW); //Turn pin 10 OFF
  delay(50); //wait 1 miliseconds

  }
  }
