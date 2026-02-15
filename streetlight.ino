int ldr = A0;
int led = 9;
int value = 0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(ldr);
  Serial.println(value);

  if(value < 500) {     
    digitalWrite(led, HIGH);
  }
  else {                
    digitalWrite(led, LOW);
  }

  delay(500);
}
