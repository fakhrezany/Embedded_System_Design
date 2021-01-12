#include <SoftwareSerial.h>
// library is important
/*
  send and receive UART data
*/
char RX[8]; // incoming data array

void setup()
{
  pinMode(12, OUTPUT); // set port output
  Serial.begin(9600); // set baud usb
}

void loop()
{  
  if (Serial.available() > 0) // check if there data in buffer
  {
  Serial.println("GOT IT\n"); // we got something 
    Serial.readBytes(RX,7); // read the incoming data array[]
  digitalWrite(12, HIGH); // set pin high
    Serial.flush(); // clean out RX data if needed
    }
  else
  {
      digitalWrite(12,LOW); // set pin low
  }
  
}
