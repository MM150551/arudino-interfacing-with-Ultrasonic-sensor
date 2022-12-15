
int trigPin = 9, echoPin = 8;
int distance,duration;

void setup() {
    Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    duration = pulseIn(echoPin,HIGH);
    distance = (duration*0.034/2);
    Serial.print(distance);
    Serial.println(" cm ");
    delay(100);
    if(distance < 5){
    digitalWrite(3,HIGH);
    }
    else{
    digitalWrite(3,LOW);

    }

    }



