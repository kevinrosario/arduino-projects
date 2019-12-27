
const int sensorPin = A0;

int sensorValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  delay(5);
  
  Serial.print("Raw sensor values: ");
  Serial.println(sensorValue);

}
