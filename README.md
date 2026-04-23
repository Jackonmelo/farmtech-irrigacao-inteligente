# FIAP - Faculdade de Informática e Administração Paulista  
## FarmTech Solutions - Sistema de Irrigação Inteligente (ESP32)

---

## 👨‍🎓 Integrante
- Jackson Melo – RM572832  

## 👩‍🏫 Orientadora
- Nicolly Candida Rodrigues Souza  

## 👨‍💼 Coordenador
- Andre Godoi Chiovato  

---

## 📌 Visão Geral

Este projeto apresenta a implementação de um sistema de irrigação inteligente utilizando o microcontrolador ESP32, com simulação realizada na plataforma Wokwi. A solução integra conceitos de Internet das Coisas (IoT), automação e monitoramento ambiental aplicados ao agronegócio.

A proposta simula um cenário de agricultura de precisão, onde dados ambientais são coletados, processados e utilizados para tomada de decisão automatizada, visando otimizar o uso de recursos naturais e aumentar a eficiência produtiva.

---

## 🎯 Objetivo

Desenvolver um sistema capaz de:

- Monitorar condições ambientais (temperatura e umidade)
- Simular características do solo (pH e nutrientes)
- Automatizar o acionamento de irrigação
- Demonstrar aplicação prática de IoT no agronegócio

---

## ⚙️ Arquitetura do Sistema

### 🔌 Componentes Utilizados

- ESP32 (microcontrolador principal)
- Sensor DHT22 (temperatura e umidade)
- Sensor LDR (simulação de pH do solo)
- 3 Botões (NPK - Nitrogênio, Fósforo e Potássio)
- Módulo Relé (simulação da bomba de irrigação)
- Resistor (pull-up para o DHT22)

### ▶️ Acesso ao Projeto
[https://wokwi.com/projects/SEU_LINK](https://wokwi.com/projects/462059657091953665)

---

## 🧠 Lógica de Funcionamento

O sistema realiza leituras contínuas dos sensores e executa ações com base em regras pré-definidas.

### 📊 Entradas

- Botões (NPK): indicam presença de nutrientes  
- LDR: simula o pH do solo  
- DHT22: mede temperatura e umidade  

### 🔄 Processamento

O valor do LDR é convertido para uma escala de pH (0 a 14), permitindo simular a condição do solo.

### ⚡ Saída

O relé é acionado automaticamente quando:

- pH < 5.5 (solo ácido)  
ou  
- Temperatura > 30°C  

---

## 🌱 Aplicação no Agronegócio

A solução representa um modelo de:

- Agricultura de precisão  
- Monitoramento inteligente do solo  
- Automação de irrigação  
- Redução do desperdício de água  

---

## 🧪 Simulação

A simulação foi realizada na plataforma Wokwi.

### ▶️ Acesso ao Projeto
> Inserir aqui o link do Wokwi

### 🧩 Interações

- Pressionar botões → simula NPK  
- Ajustar LDR → altera pH  
- Alterar DHT22 → muda temperatura e umidade  
- Relé → indica irrigação ativa  

---

## 📂 Estrutura do Repositório

- assets/ → imagens do circuito  
- src/ → código fonte  
- diagram.json → circuito do Wokwi  
- wokwi.toml → configuração do simulador  
- libraries.txt → bibliotecas  
- README.md → documentação  

---

## ▶️ Como Executar

### Pré-requisitos

- Conta no Wokwi  
- Navegador atualizado  
- Noções básicas de Arduino  

### Passos

1. Acessar o link do projeto  
2. Executar a simulação  
3. Interagir com sensores e botões  
4. Monitorar dados no Serial  
5. Verificar acionamento do relé  

---

## 📈 Resultados

- Leitura correta dos sensores  
- Resposta dos botões (NPK)  
- Conversão do LDR para pH  
- Acionamento automático da irrigação  

---

## 🚀 Possíveis Evoluções

- Integração com APIs climáticas  
- Dashboard de monitoramento  
- Armazenamento em nuvem  
- Sensores reais de solo  
- Uso de Machine Learning  

---

## 📜 Licença

Creative Commons Attribution 4.0 International (CC BY 4.0)

---

## 📌 Considerações Finais

O projeto demonstra, de forma prática, como IoT pode ser aplicada no agronegócio para otimizar recursos, reduzir desperdícios e apoiar decisões baseadas em dados.
