// C++ code
//
int neil_ard = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  neil_ard = 400;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(13, HIGH);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(12, HIGH);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(12, LOW);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(11, HIGH);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(11, LOW);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(10, HIGH);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(10, LOW);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(9, HIGH);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(9, LOW);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(9, HIGH);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(9, LOW);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(10, HIGH);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(10, LOW);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(11, HIGH);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(11, LOW);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(12, HIGH);
  delay(neil_ard); // Wait for neil_ard millisecond(s)
  digitalWrite(12, LOW);
}