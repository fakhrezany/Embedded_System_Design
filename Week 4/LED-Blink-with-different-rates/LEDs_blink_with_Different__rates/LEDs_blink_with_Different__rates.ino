int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;
int led6 = 13;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  blinkLED(led1, 781, 515);
  blinkLED(led2, 2014, 1348);
  blinkLED(led3, 343, 573);
  blinkLED(led4, 678, 1839);
  blinkLED(led5, 342, 534);
  blinkLED(led6, 1478, 326);

}


void blinkLED(int pin, unsigned long durOn, unsigned long durOff)
{
  digitalWrite(pin, HIGH);
  delay(durOn);
  digitalWrite(pin, LOW);
  delay(durOff);
}
