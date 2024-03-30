//**********ultrasonic sensor led distance indigator**********
//*******************Positive Technology**********************
int echoPin = 9;
int trigPin = 10;
int greenLed = 11;
int yellowLed = 12;
int blueLed = 7;
int redLed = 6;

unsigned long duration;
int distance;

void setup(){
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);

  digitalWrite(greenLed, HIGH);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(blueLed, HIGH);
  digitalWrite(redLed, HIGH);

  delay(1000);

  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(blueLed, LOW);
  digitalWrite(redLed, LOW);

  delay(500);
}

void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.034) / 2;

  if (distance <= 20){
    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(blueLed, HIGH);
    digitalWrite(redLed, HIGH);
  }else if(distance <= 130){
    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(blueLed, HIGH);
    digitalWrite(redLed, LOW);
  }else if(distance <= 240){
    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(blueLed, LOW);
    digitalWrite(redLed, LOW);
  }else{
    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(blueLed, LOW);
    digitalWrite(redLed, LOW);
  }
  delay(100);
}