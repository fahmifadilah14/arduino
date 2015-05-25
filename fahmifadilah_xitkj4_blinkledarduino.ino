int varled3 = 3;
int varled4 = 4;
int varled5 = 5;
int varled6 = 6;

void setup() {

  pinMode(varled3, OUTPUT);
  pinMode(varled4, OUTPUT);
  pinMode(varled5, OUTPUT);
  pinMode(varled6, OUTPUT);
}

void loop() {

  {digitalWrite(varled3, HIGH);
  delay(100);
  digitalWrite(varled3, LOW);
  delay(100);}
  
  {digitalWrite(varled4, HIGH);
  delay(100);
  digitalWrite(varled4, LOW);
  delay(100);}
  
  {digitalWrite(varled5, HIGH);
  delay(100);
  digitalWrite(varled5, LOW);
  delay(100);}
  
  {digitalWrite(varled6, HIGH);
  delay(100);
  digitalWrite(varled6, LOW);
  delay(100);
}
}
