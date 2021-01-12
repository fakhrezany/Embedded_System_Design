#include <SoftwareSerial.h> //library
//library is needed
/*
  send and receive UART data
*/
char TX[8] = "LED ON"; // char data array

void setup()
{
  pinMode(2, OUTPUT); // LED pin output
  Serial.begin(9600); // set baudrate
}
int x = 0; // datatype whileloop
void loop()
{
  // do this while x is smaller then 5 for example
  while(x < 5){
  Serial.write(TX,7); // send byte array
  digitalWrite(2, HIGH); // make IO logic HIGH
  delay(500);
  x++; // increament our var x
  Serial.flush(); // clear send buffer
  }
digitalWrite(2, LOW); // make IO logic HIGH
    

}
