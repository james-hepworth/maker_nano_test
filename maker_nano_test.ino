void displayOnLEDs(uint8_t number);

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  for (uint8_t i = 1; i <= 10; i++)
  {
    delay(1000);
  	displayOnLEDs(i);
  }
  tone(8, 1000, 200);
}

void displayOnLEDs(uint8_t number)
{
  for(uint8_t i = 0; i < 8; i++)
  {
    digitalWrite(i+2,(number & (0b1 << i)) ? HIGH : LOW);
  }
}