#include <Servo.h>

Servo servo;

const int trigPin = 10;
const int echoPin = 11;

long duration;
float distance;

void setup() {
  servo.attach(9);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  servo.write(0);   

  Serial.begin(9600);
}

void loop() {


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  
  duration = pulseIn(echoPin, HIGH);

  
  distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= 10) {

    
    delay(500);

   
    servo.write(180);

  } else {

   
    servo.write(0);
  }

  delay(100);
}