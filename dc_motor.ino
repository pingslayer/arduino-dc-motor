const int input1 = 7;
const int input2 = 8;
const int enable1 = 9;

void setup() {
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(enable1, OUTPUT);
}

void loop() {
  digitalWrite(input1 , HIGH);
  digitalWrite(input2 , LOW);
  analogWrite(enable1,255) ;
}
