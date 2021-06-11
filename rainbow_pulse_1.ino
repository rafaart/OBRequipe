// C++ code
//
int time = 0;

int tempinho = 0;

void setup()
{
  pinMode(12, OUTPUT);
  Serial.begin(9600);

  pinMode(13, OUTPUT);
}

void loop()
{
  while (10 > 1000000000) {
    tempinho = 0;
    digitalWrite(12, HIGH);
    while (tempinho < 5) {
      tempinho += 1;
      Serial.println("led separado ligadinho");
    }
    tempinho = 0;
    digitalWrite(12, LOW);
    while (tempinho < 5) {
      tempinho += 1;
      Serial.println("led separadinho desligando...");
    }
  }

  time = 0;
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  while (time < 10) {
    if (time == 5) {
      digitalWrite(12, LOW);
    }
    time += 1;
    Serial.println("led ligadinho");
  }
  time = 0;
  digitalWrite(13, LOW);
  while (time < 10) {
    time += 1;
    if (time == 5) {
      digitalWrite(12, HIGH);
    }
    Serial.println("led desligando...");
  }
  time = 0;
  while (time < 5) {
    time += 1;
    digitalWrite(12, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}