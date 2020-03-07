#include<Servo.h>
int motor1pin=9;
//int motor2pin=5;
Servo motor1;
//Servo motor2;
void setup() {
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(motor1pin,OUTPUT);
  
  analogWrite(6,150);
  analogWrite(5,150);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(7,LOW);

  
  motor1.attach(motor1pin,1000,2000);
  Serial.begin(9600);
//  //motor2.attach(motor2pin);
 // delay(10);
  //motor1.write(40); //to arm the esc
//  //motor2.write(40);
}
//int i=0;
int flag =0;
int potvalue;
int i;
void loop() {
  
  //motor1.write(40);
  if(flag==0)
  {
  for (i=40;i<50;i+=1){
    potvalue=i;
    potvalue=map(potvalue,42,100,0,180);
    //motor2.write(potvalue)
      motor1.write(potvalue);
      delay(1000);
      if(i>48){
        flag=1;
        break;
      }
      }
      //motor1.write(potvalue);
  }
  if(flag==1){
    motor1.write(potvalue); 
  }


      
  /*for (i=100;i>40;i--){
      potvalue=i;
    potvalue=map(potvalue,42,100,0,180);
      motor1.write(potvalue);
      Serial.println(potvalue);
  delay(2000);}
  Serial.println(potvalue);*/

  //motor2.write(500);
  
}
