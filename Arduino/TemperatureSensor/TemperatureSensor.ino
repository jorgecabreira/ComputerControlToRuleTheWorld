int baselineTemp = 0;
int celsius = 0;
int tempSensorPin = A0;
int pinCold = 2;
int pinMed = 3;
int pinHot = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(tempSensorPin, INPUT);
  Serial.begin(9600);

  pinMode(pinCold, OUTPUT);
  pinMode(pinMed, OUTPUT);
  pinMode(pinHot, OUTPUT);
}

void loop() {
  // set threshold temperature to activate LEDs
  baselineTemp = 20;
  // measure temperature in Celsius
  celsius = map(((analogRead(tempSensorPin) - 20) * 3.04), 0, 1023, -40, 125);
  Serial.print(celsius);
  Serial.println(" C");

   if (celsius < baselineTemp) {
    digitalWrite(pinCold, LOW);
    digitalWrite(pinMed, LOW);
    digitalWrite(pinHot, LOW);
  }
  if (celsius >= baselineTemp && celsius < baselineTemp + 10) {
    digitalWrite(pinCold, HIGH);
    digitalWrite(pinMed, LOW);
    digitalWrite(pinHot, LOW);
  }
  if (celsius >= baselineTemp + 5 && celsius < baselineTemp + 20) {
    digitalWrite(pinCold, HIGH);
    digitalWrite(pinMed, HIGH);
    digitalWrite(pinHot, LOW);
  }
  if (celsius >= baselineTemp + 8 && celsius < baselineTemp + 30) {
    digitalWrite(pinCold, HIGH);
    digitalWrite(pinMed, HIGH);
    digitalWrite(pinHot, HIGH);
  }
  if (celsius >= baselineTemp + 30) {
    digitalWrite(pinCold, HIGH);
    digitalWrite(pinMed, HIGH);
    digitalWrite(pinHot, HIGH);
  }
  delay(1000); // Wait for 1000 millisecond(s)
}
