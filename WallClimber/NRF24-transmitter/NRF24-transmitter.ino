#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(9,10);

const byte address[2] = "01";

void setup() {
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MAX);
  radio.setDataRate(RF24_250KBPS);
  radio.stopListening();
  //Serial.begin(9600);
}

void loop() {
 
   int text = 123;
 // radio.write(&text, sizeof(text));
 // Serial.println("ok");
  delay(100);

  
}
