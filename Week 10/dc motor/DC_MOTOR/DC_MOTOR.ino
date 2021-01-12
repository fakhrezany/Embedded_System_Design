int inPin1 = 6;  //H-Bridge input pins
int inPin2 = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(inPin1, OUTPUT);
  pinMode(inPin2, OUTPUT);
  Serial.println("Press a(clockwise) or d(anticlockwise) direction?");
  Serial.println("other than that motor will stop");  
}
void loop()
{
  if(Serial.available())
  {
    char ch = Serial.read();
    if(ch == 'a')
    {
      Serial.println("ClockWise");
      digitalWrite(inPin1, LOW);
      digitalWrite(inPin2, HIGH);  
    }  
    else if(ch == 'd')
    {
      Serial.println("Anti-ClockWise");
      digitalWrite(inPin1, HIGH);
      digitalWrite(inPin2, LOW);  
    }
    else
    {
      Serial.println("Stop motor");
      digitalWrite(inPin1, LOW);
      digitalWrite(inPin2, LOW);
    }
  }  
}
