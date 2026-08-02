#include <Servo.h>

Servo myServo;

const int trigPin = 10;
const int echoPin = 11;

long duration;
int distance;

void setup() {

  myServo.attach(9);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  myServo.write(0);

  Serial.begin(9600);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.println(distance);

  if (distance <= 10) {
    myServo.write(90);
  } else {
    myServo.write(0);
  }

  delay(100);
}