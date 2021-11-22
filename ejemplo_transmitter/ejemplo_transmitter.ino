#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8); //CNS, CE

const byte address[6] = "00001";


void setup() {
  
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening(); //set it as transmitter
}

void loop() {
const char text[] = "ontas??????";
radio.write (&text, sizeof(text));
delay(1000);
}
