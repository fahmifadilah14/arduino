int varled3 = 3;
int varled4 = 5;
int varled5 = 6;
int varled6 = 7;

void setup() {

  pinMode(varled3, OUTPUT);
  pinMode(varled5, OUTPUT);
  pinMode(varled6, OUTPUT);
  pinMode(varled7, OUTPUT);
}

void loop() {

  {digitalWrite(varled3, HIGH);
  delay(100);
  digitalWrite(varled3, LOW);
  delay(100);}
  
  {digitalWrite(varled5, HIGH);
  delay(100);
  digitalWrite(varled5, LOW);
  delay(100);}
  
  {digitalWrite(varled6, HIGH);
  delay(100);
  digitalWrite(varled6, LOW);
  delay(100);}
  
  {digitalWrite(varled7, HIGH);
  delay(100);
  digitalWrite(varled7, LOW);
  delay(100);}
}
