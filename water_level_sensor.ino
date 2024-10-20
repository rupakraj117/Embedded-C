void setup() {
pinMode(12,OUTPUT);
pinMode(10,INPUT);
}

void loop() {
  if (digitalRead(10)== HIGH){
    digitalWrite(12,HIGH);
  }
  else{
    digitalWrite(12,LOW);
  }
}
