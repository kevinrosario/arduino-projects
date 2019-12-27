int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;

const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

  Serial.begin(9600);

  while(millis() < 5000) {
    sensorValue = analogRead(A0);
    // Calibrating sensor
    if(sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
    if(sensorValue < sensorLow) {
      sensorLow = sensorValue;
    }
  }

  digitalWrite(ledPin, LOW);
}

void loop() {
  Serial.print("sensor low: ");
  Serial.print(sensorLow);
  Serial.print(" sensor high: ");
  Serial.print(sensorHigh);
  Serial.print(" sensor value: ");
  Serial.print(sensorValue);
  sensorValue = analogRead(A0);

  int pitch = map(sensorValue,sensorLow,sensorHigh, 50, 4000);
  Serial.print(" pitch: ");
  Serial.println(pitch);
  
  tone(8, pitch, 20);

  delay(10);

}
