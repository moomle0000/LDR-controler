int LDR = A0;
int input_val = 0;
int led = 5;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  input_val = analogRead(LDR);
  Serial.print("LDR Value is: ");
  Serial.println(input_val);
  if (input_val < 50) {
    digitalWrite(led , HIGH);
  }else{
    digitalWrite(led , LOW);
    }
  delay(1000);
}
