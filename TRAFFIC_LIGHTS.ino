int red1=13;
int orange1=12;
int green1=11;
int red12=10;
int orange2=9;
int green2=8;
int red3=7;
int orange3=6;
int green3=5;
int red4=4;
int orange4=3;
int green4=2;
void setup() {
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT); 
 pinMode(9,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(5,OUTPUT);  
 pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(2,OUTPUT);
 digitalWrite(13,LOW);
 digitalWrite(12,LOW);
 digitalWrite(11,LOW);
 digitalWrite(10,LOW);
 digitalWrite(9,LOW);
 digitalWrite(8,LOW);
 digitalWrite(7,LOW);
 digitalWrite(6,LOW);
 digitalWrite(5,LOW);
 digitalWrite(4,LOW);
 digitalWrite(3,LOW);
 digitalWrite(2,LOW);
}

void loop() {
//side1  
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(3,LOW);
digitalWrite(2,LOW);
delay(3000);
//side2
digitalWrite(13,LOW);
digitalWrite(12,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
delay(1000);
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(3,LOW);
digitalWrite(2,LOW);
delay(3000);
//side3
digitalWrite(10,LOW);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
delay(1000);
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
digitalWrite(3,LOW);
digitalWrite(2,LOW);
delay(3000);
//side4
digitalWrite(7,LOW);
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,HIGH);
digitalWrite(2,LOW);
delay(1000);
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
digitalWrite(2,HIGH);
delay(3000);
}
