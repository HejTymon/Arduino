String data = "";

void setup() 
{
  Serial.begin(9600);

  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);

  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
}

void loop()
{
  if(Serial.available() > 0)
{
  data = Serial.readStringUntil('\n');
}

  if(data == "green")
  {
    digitalWrite(10,HIGH);
    digitalWrite(8,LOW);
    Serial.println("Green LED is ON");
    delay(1000);
  }
  else if(data == "red")
  {
    digitalWrite(10,LOW);
    digitalWrite(8,HIGH);    
    Serial.println("Red LED is ON");
    delay(1000);
  }
  else
  {
    digitalWrite(8,LOW);    
    digitalWrite(10,LOW);
    Serial.println("wrong command");
    delay(1000);
  }

}

