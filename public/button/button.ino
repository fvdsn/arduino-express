byte buttonPin = 2;
byte buttonState;

void setup() {
    pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    Serial.println("pressed");
    delay(10);
  } else {
    Serial.println("released");
    delay(10);
  }
}
