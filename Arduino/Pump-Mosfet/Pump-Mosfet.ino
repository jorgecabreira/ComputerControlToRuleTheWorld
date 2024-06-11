// electrical diagram taken from https://www.youtube.com/watch?v=XrJ_zLWFGFw

int gatePin = 9;
int delayTime = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(gatePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(gatePin, HIGH);
  delay(delayTime);
  digitalWrite(gatePin, LOW);
  delay(delayTime);
}
