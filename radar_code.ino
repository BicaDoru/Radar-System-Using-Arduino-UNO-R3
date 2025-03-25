#include <Servo.h> 


const int trigPin = 2;
const int echoPin = 9;

long duration;
int distance;

int buzzpin = 7;
int buzzState = LOW;

int ledRed = 3; 

unsigned long previousMillis = 0;

const long intervalFar = 250;
const long intervalClose = 50;

Servo myServo; 

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600);
  myServo.attach(12); 
  pinMode(buzzpin, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  StartScan();
}


int calculateDistance() { 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // Reads echoPin and returns the sound wave travel time (ms)
  distance = duration * 0.034 / 2;
  return distance;
}

// Start scanning for objects
void StartScan() {
  
  for (int i = 15; i <= 165; i++) {  
    myServo.write(i);
    delay(30);
    checkDistance();
  }

  
  for (int i = 165; i >= 15; i--) {  
    myServo.write(i);
    delay(30);
    checkDistance();
  }
}

// Function to check distance and control buzzer & LED
void checkDistance() {
  distance = calculateDistance();
  unsigned long currentMillis = millis();

  if (distance <= 40 && distance > 20) {
    if (currentMillis - previousMillis >= intervalFar) {
      previousMillis = currentMillis;
      buzzState = !buzzState; // Toggle buzzer state
      digitalWrite(buzzpin, buzzState);
      digitalWrite(ledRed, buzzState); 
    }
  } else if (distance <= 20 && distance > 0) {
    if (currentMillis - previousMillis >= intervalClose) {
      previousMillis = currentMillis;
      buzzState = !buzzState; 
      digitalWrite(buzzpin, buzzState);
      digitalWrite(ledRed, buzzState); 
    }
  } else if (distance > 40) {
    digitalWrite(buzzpin, LOW);
    digitalWrite(ledRed, HIGH); 
  }

  Serial.print(distance);
  Serial.println(" cm");
}
