int tiltSensor = 2;
int vertLed = 8;
int horiLed = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(tiltSensor, INPUT);
  pinMode(vertLed, OUTPUT);
  pinMode(horiLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(tiltSensor) == 1){
    digitalWrite(vertLed, HIGH);
    digitalWrite(horiLed, LOW);
  }
  else{
    digitalWrite(vertLed, LOW);
    digitalWrite(horiLed, HIGH);
  }
  delay(100);
}
