

int buzzer=19;
void setup()
{
  Serial.begin(115200);
}
void loop()
{
  tone(buzzer, 392, 500);
  tone(buzzer, 330, 500);
  tone(buzzer, 330, 500);
  delay(500);
  tone(buzzer, 349, 500);
  tone(buzzer, 294, 500);
  tone(buzzer, 294, 500);
  delay(500);
  tone(buzzer, 262, 500);
  tone(buzzer, 294, 500);
  tone(buzzer, 330, 500);
  tone(buzzer, 349, 500);
  tone(buzzer, 392, 500);
  tone(buzzer, 392, 500);
  tone(buzzer, 392, 500);
  delay(3000);
}