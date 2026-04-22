#define DHTPIN 15
#define DHTTYPE DHT22

#include <DHT.h>
DHT dht(DHTPIN, DHTTYPE);

#define rele 5
#define botaoN 18
#define botaoP 19
#define botaoK 21
#define ldr 34

void setup() {
  Serial.begin(9600);
  dht.begin();

  pinMode(rele, OUTPUT);
  pinMode(botaoN, INPUT_PULLUP);
  pinMode(botaoP, INPUT_PULLUP);
  pinMode(botaoK, INPUT_PULLUP);
}

void loop() {

  float umidade = dht.readHumidity();
  int valorLDR = analogRead(ldr);

  bool N = !digitalRead(botaoN);
  bool P = !digitalRead(botaoP);
  bool K = !digitalRead(botaoK);

  float pH = map(valorLDR, 0, 4095, 0, 14);

  if (umidade < 60 && pH >= 5.5 && pH <= 7 && N && P && K) {
    digitalWrite(rele, HIGH);
  } else {
    digitalWrite(rele, LOW);
  }

  delay(2000);
}
