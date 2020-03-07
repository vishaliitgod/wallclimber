
void setup() {
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  analogWrite(6,100);
  analogWrite(5,100);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(7,LOW);
}
