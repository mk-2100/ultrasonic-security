int trig = 13;
int echo = 12;
float time = 0.00;
float distance = 0.00;

void setup() {
  Serial.begin(9600);

  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delay(5);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  
  time = pulseIn(echo, HIGH);
  distance = (time * 0.034) / 2;
  
  if (distance <= 90) {
    Serial.println("MOVEMENT DETECTED!");
    delay(1000);
  }
}
