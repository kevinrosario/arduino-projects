const int greenLEDPin = 9;
const int blueLEDPin = 10;
const int redLEDPin = 11;


void setup() {
  Serial.begin(9600);
  
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  analogWrite(redLEDPin, 0);
  analogWrite(greenLEDPin, 0);
  analogWrite(blueLEDPin, 140);
  
}
