// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  float Volt = sensorValue*5.0/1024.0;
  Serial.print("Sensor Reading: ");
  Serial.print(Volt);
  Serial.print("V");
  float BGL = (158.12 * Volt) - 519.35;
  Serial.print("\t\tBGL: ");
  Serial.print(BGL);
  Serial.print("mg/dl");
  Serial.println();
  delay(100);        // delay in between reads for stability
}
