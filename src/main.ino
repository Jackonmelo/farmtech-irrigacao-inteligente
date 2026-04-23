#include "DHT.h"

// ---------------- BOTÕES (NPK) ----------------
#define BTN_N 32   // Nitrogênio
#define BTN_P 33   // Fósforo
#define BTN_K 25   // Potássio

// ---------------- LDR (pH SIMULADO) ----------------
#define LDR_PIN 34

// ---------------- DHT22 ----------------
#define DHTPIN 27
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

// ---------------- RELÉ ----------------
#define RELE_PIN 26  // pode ajustar se usou outro pino

void setup() {
  Serial.begin(115200);

  // Botões
  pinMode(BTN_N, INPUT_PULLUP);
  pinMode(BTN_P, INPUT_PULLUP);
  pinMode(BTN_K, INPUT_PULLUP);

  // Relé
  pinMode(RELE_PIN, OUTPUT);
  digitalWrite(RELE_PIN, HIGH); // desligado (relé geralmente é invertido)

  // DHT
  dht.begin();
}

void loop() {

  // -------- LEITURA DOS BOTÕES --------
  int estadoN = digitalRead(BTN_N);
  int estadoP = digitalRead(BTN_P);
  int estadoK = digitalRead(BTN_K);

  // -------- LEITURA DO LDR --------
  int valorLDR = analogRead(LDR_PIN);

  // Conversão para pH (0 a 14)
  float ph = (valorLDR / 4095.0) * 14.0;

  // -------- LEITURA DHT22 --------
  float umidade = dht.readHumidity();
  float temperatura = dht.readTemperature();

  // Verifica erro
  if (isnan(umidade) || isnan(temperatura)) {
    Serial.println("Erro ao ler DHT22!");
    return;
  }

  // -------- LÓGICA DO RELÉ --------
  // Exemplo: liga se pH baixo OU temperatura alta
  if (ph < 5.5 || temperatura > 30) {
    digitalWrite(RELE_PIN, LOW);  // liga relé
  } else {
    digitalWrite(RELE_PIN, HIGH); // desliga relé
  }

  // -------- PRINT COMPLETO --------
  Serial.print("N: ");
  Serial.print(estadoN);

  Serial.print(" | P: ");
  Serial.print(estadoP);

  Serial.print(" | K: ");
  Serial.print(estadoK);

  Serial.print(" | LDR: ");
  Serial.print(valorLDR);

  Serial.print(" | pH: ");
  Serial.print(ph);

  Serial.print(" | Temp: ");
  Serial.print(temperatura);

  Serial.print(" | Umidade: ");
  Serial.print(umidade);

  Serial.println();

  delay(1000);
}
