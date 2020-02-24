bool FWDenable = LOW;
bool REVenable = LOW;
void setup() {
  // put your setup code here, to run once:
pinMode(10, OUTPUT); //Pulse
pinMode(9, OUTPUT); //Direction
pinMode(8, INPUT);
pinMode(7, INPUT);


}

void loop() {

  // put your main code here, to run repeatedly:
 if(FWDenable = HIGH){
  switch(digitalRead(8)){
    case HIGH:
      turnFWD();
      REVenable = HIGH;
      FWDenable = LOW;
     break;
   
  }
  }
  

 
}

void turnFWD()
{
  digitalWrite(9, LOW);
  for(int stepcount = 0; stepcount < 50; stepcount++){
  digitalWrite(10, HIGH); //Turn pin 10 ON
  //delay(1); // wait 1 miliseconds
  digitalWrite(10, LOW); //Turn pin 10 OFF
  delay(1); //wait 1 miliseconds
  }
}

void turnREV()
{
    digitalWrite(9, HIGH);
 for(int stepcount = 0; stepcount < 50; stepcount++){
  digitalWrite(10, HIGH); //Turn pin 10 ON
  //delay(1); // wait 1 miliseconds
  digitalWrite(10, LOW); //Turn pin 10 OFF
  delay(1); //wait 1 miliseconds
 }
}

  
