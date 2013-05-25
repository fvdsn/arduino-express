/* Stick */
int x = 1;
int y = 0;
/* Buttons */
int A = 5;
int B = 3;
int C = 4;
  
void setup()
{
  Serial.begin(9600);
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
}
 
void loop()
{  
  Serial.print("x: ");
  Serial.println(analogRead(x));
  Serial.print("y: ");
  Serial.println(analogRead(y));
  if (digitalRead(A) == LOW) {
    Serial.print("A: ");
    Serial.println("pressed");
  }
  if (digitalRead(B) == LOW) {
    Serial.print("B: ");
    Serial.println("pressed");
  }
  if (digitalRead(C) == LOW) {
    Serial.print("C: ");
    Serial.println("pressed");
  }
  delay(100);
}
