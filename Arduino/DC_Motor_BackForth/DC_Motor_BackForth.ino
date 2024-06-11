// taken from https://www.youtube.com/watch?v=YU17L650k3s

int in1pin = 6;
int in2pin = 7;
int delayTime = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(in1pin, OUTPUT);
  pinMode(in2pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(in1pin, LOW);
  digitalWrite(in2pin, LOW);
  delay(delayTime);
  // spin in one direction
  digitalWrite(in1pin, HIGH);
  digitalWrite(in2pin, LOW);
  delay(delayTime);
  // spin in oposite direaction
  digitalWrite(in1pin, LOW);
  digitalWrite(in2pin, HIGH);
  delay(delayTime);
}
