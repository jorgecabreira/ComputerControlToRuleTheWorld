
const int lightSensorPin = A0;
const int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightSensorReading = 0;
  lightSensorReading = analogRead(lightSensorPin);
  Serial.println(lightSensorReading);

  if (lightSensorReading < 50) {
    digitalWrite(ledPin, HIGH);  // Turn LED on
  } else {
    digitalWrite(ledPin, LOW);   // Turn LED off
  }

  delay(100);
}








//if (lightSensorReading < 50) {
//    digitalWrite(ledPin, HIGH);  // Turn LED on
//  } else {
//    digitalWrite(ledPin, LOW);   // Turn LED off
//  }

