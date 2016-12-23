
  int photoresistancePin=5;
//  toresistance=5;
  int ledPin=11;
  int val=0;
  

void setup(){
  pinMode(ledPin,OUTPUT);
  
  }

void loop() {
  // put your main code here, to run repeatedly:
 val=analogRead(photoresistancePin);
 if(val<=512){
  digitalWrite(ledPin,LOW);
  }
  else{
    digitalWrite(ledPin,HIGH);
    }
}
