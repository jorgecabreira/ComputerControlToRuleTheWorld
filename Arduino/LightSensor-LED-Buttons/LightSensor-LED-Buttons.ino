int lightSensorPin = A0;
int yellowLEDPin = 13;
int redLEDPin = 12;
int greenLEDPin = 11;
int rightButtonPin = 10;
int leftButtonPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(yellowLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);

  pinMode(rightButtonPin, INPUT_PULLUP);
  pinMode(leftButtonPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightSensorReading = analogRead(lightSensorPin);
  
  int rightButtonState = digitalRead(rightButtonPin);
  int leftButtonState = digitalRead(leftButtonPin);
  Serial.print(lightSensorReading);
  Serial.print(rightButtonState);
  Serial.println(leftButtonState);
  delay(100);

  if (lightSensorReading < 30) {
    digitalWrite(yellowLEDPin, LOW);
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, LOW);


    if (rightButtonState == 0){
      digitalWrite(greenLEDPin, HIGH);
    }
    else {
      digitalWrite(greenLEDPin, LOW);
    }

    if (leftButtonState == 0){
      digitalWrite(redLEDPin, HIGH);
    }
    else {
      digitalWrite(redLEDPin, LOW);
    }


  }
  else if ((lightSensorReading > 30) && (lightSensorReading < 50)) {
    digitalWrite(yellowLEDPin, HIGH);
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, LOW);
  }
  else if ((lightSensorReading > 50) && (lightSensorReading < 100)) {
    digitalWrite(yellowLEDPin, LOW);
    digitalWrite(redLEDPin, HIGH);
    digitalWrite(greenLEDPin, LOW);
  }
  else if (lightSensorReading > 100) {
    digitalWrite(yellowLEDPin, LOW);
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, HIGH);
  }

}
