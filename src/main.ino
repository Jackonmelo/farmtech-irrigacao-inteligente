#include <DHT.h>

#define DHTPIN 15
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

// Botões (NPK)
#define BTN_N 32
#define BTN_P 33
#define BTN_K 25

// LDR (pH simulado)
#define LDR 34

// Relé (bomba)
#define RELE 26

void setup() {
  Serial.begin(115200);

  pinMode(BTN_N, INPUT_PULLUP);
  pinMode(BTN_P, INPUT_PULLUP);
  pinMode(BTN_K, INPUT_PULLUP);

  pinMode(RELE, OUTPUT);

  dht.begin();
}

void loop() {

  // Leitura sensores
  int N = !digitalRead(BTN_N);
  int P = !digitalRead(BTN_P);
  int K = !digitalRead(BTN_K);

  int ph = analogRead(LDR); // 0 a 4095

  float umidade = dht.readHumidity();

  // Log
  Serial.println("---- DADOS ----");
  Serial.print("N: "); Serial.println(N);
  Serial.print("P: "); Serial.println(P);
  Serial.print("K: "); Serial.println(K);
  Serial.print("pH (simulado): "); Serial.println(ph);
  Serial.print("Umidade: "); Serial.println(umidade);

  // 🔥 REGRA DE NEGÓCIO (IMPORTANTE PRA NOTA)
  if (umidade < 60 && N == 1 && P == 1 && K == 1 && ph > 2000) {
    digitalWrite(RELE, HIGH); // liga irrigação
    Serial.println("Irrigação LIGADA");
  } else {
    digitalWrite(RELE, LOW); // desliga
    Serial.println("Irrigação DESLIGADA");
  }

  delay(2000);
}
