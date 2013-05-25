byte potPin = 0;
byte buttonPin = 2;
byte buttonState;

void setup() {
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    Serial.println("button: pressed");
  } else {
    Serial.println("button: released");
  }
  Serial.print("pot: ");
  Serial.println(analogRead(potPin));
  delay(100);
}
