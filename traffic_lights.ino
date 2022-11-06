void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);

  pinMode(2,INPUT_PULLUP);
}

void loop() {
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(1000);
  while (digitalRead(2) == HIGH) {}

  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  delay(1000);
  while (digitalRead(2) == HIGH) {}

  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  delay(1000);
  while (digitalRead(2) == HIGH) {}

  digitalWrite(9,HIGH);
  delay(1000);
  while (digitalRead(2) == HIGH) {}
}
