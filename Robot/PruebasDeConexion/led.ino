int LedPin = 13;
bool bin = 0;
void setup(){
  pinMode(LedPin, OUTPUT);
}
void loop(){
  digitalWrite(LedPin, bin=!bin);
  delay(1000);
}
