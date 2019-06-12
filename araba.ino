
#include <SoftwareSerial.h>
SoftwareSerial Kerem(10, 11); // RX, TX
int BVeri;
byte hiz;
byte m1 = 0;
const byte icled = 12;
const byte gerimotor = 7;
const byte ilerimotor = 6;
const byte e1 = 9; 
const byte sagmotor = 2;
const byte solmotor = 4;
const byte e2 = 3; 
#define ileri 70
#define geri 66
#define sag 82
#define sol 76
#define isag 73
#define isol 71
#define gsag 74
#define gsol 72
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Kerem.begin(9600);
  pinMode(icled, OUTPUT);
  pinMode(gerimotor, OUTPUT);
  pinMode(ilerimotor, OUTPUT);
  pinMode(e1, OUTPUT);
  pinMode(sagmotor, OUTPUT);
  pinMode(solmotor, OUTPUT);
  pinMode(e2, OUTPUT);
}

void loop() {
analogWrite(e1,hiz);
analogWrite(e2,hiz);
Kerem.available();
BVeri=Kerem.read();
Serial.println(BVeri);
  if(BVeri==119 and m1==0 ){digitalWrite(icled, HIGH); m1=1;}
  else if(BVeri==119 and m1==1){digitalWrite(icle+d, LOW); m1=0; }
  if(BVeri==120){hiz=255;}
  if(BVeri==118){hiz=150;}
  if(BVeri==ileri){
      digitalWrite(ilerimotor, HIGH);
      }
  else if(BVeri==geri){
      digitalWrite(gerimotor, HIGH);
      }
  else if(BVeri==sag){
      digitalWrite(sagmotor, HIGH);
      }
  else if(BVeri==sol){
      digitalWrite(solmotor, HIGH);
      }
  else if(BVeri==isag){
      digitalWrite(ilerimotor, HIGH);
      digitalWrite(sagmotor, HIGH);
      }
  else if(BVeri==isol){
      digitalWrite(ilerimotor, HIGH);
      digitalWrite(solmotor, HIGH);
      }
  else if(BVeri==gsag){
      digitalWrite(gerimotor, HIGH);
      digitalWrite(sagmotor, HIGH);
      }  
  else if(BVeri==gsol){
      digitalWrite(gerimotor, HIGH);
      digitalWrite(solmotor, HIGH);
      }
    
 else{
      digitalWrite(ilerimotor, LOW);
      digitalWrite(gerimotor, LOW);
      digitalWrite(sagmotor, LOW);
      digitalWrite(solmotor, LOW);
      }
 
delay(25);

}
