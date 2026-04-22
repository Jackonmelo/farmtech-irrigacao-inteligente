# FarmTech Solutions - Irrigação Inteligente

## Objetivo
Sistema de irrigação automatizado utilizando ESP32.

## Componentes
- ESP32
- DHT22 (umidade)
- LDR (pH simulado)
- Botões (NPK)
- Relé

## Lógica

A irrigação liga quando:
- Umidade < 60%
- pH entre 5.5 e 7
- NPK ativos

## Circuito

(Imagem aqui)

## Código

src/main.ino
