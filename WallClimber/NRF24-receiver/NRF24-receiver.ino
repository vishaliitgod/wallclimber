#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(8,9);

//const int buzzer = 2;
const byte address[6] = "00001";

void setup() {
  // put your setup code here, to run once:
  //pinMode(buzzer, OUTPUT);
  radio.begin();
  radio.openReadingPipe(0,address);
  radio.setPALevel(RF24_PA_MAX);
  radio.setDataRate(RF24_250KBPS);
  radio.startListening();
  Serial.begin(9600);
}

void loop() {
  char text[32] = "";
  Serial.println("NOT OK");
  
  if (radio.available()) {Serial.println("OK");
    radio.read(&text, sizeof(text));
    String transData = String(text);
    if (transData == "nrftest") {
      
      }    
  }
}
