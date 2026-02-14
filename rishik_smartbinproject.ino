#include <ESP32Servo.h>

#define TRIG_PIN 5
#define ECHO_PIN 18
#define SERVO_PIN 13

Servo myServo;

long duration;
float distance;

void setup() {
  Serial.begin(115200);
  
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  
  myServo.attach(SERVO_PIN);
  myServo.write(0);  // Lid closed position
}

void loop() {

  // Send ultrasonic pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read echo
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculate distance
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // If object detected within 20 cm
  if (distance > 0 && distance < 20) {
    myServo.write(100);  // Open lid
    delay(5000);        // Wait 5 seconds
    myServo.write(0);   // Close lid
    delay(1000);
  }

  delay(200);
}

