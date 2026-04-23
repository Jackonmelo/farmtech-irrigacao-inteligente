# FIAP - Faculdade de Informática e Administração Paulista

<p align="center">
<a href="https://www.fiap.com.br/">
<img src="assets/logo-fiap.png" alt="FIAP" border="0" width=40% height=40%>
</a>
</p>

<br>

# FarmTech Solutions - Irrigação Inteligente

## Integrante:
- Jackson Melo – RM572832

## Orientadora:
- Nicolly Candida Rodrigues Souza

### Coordenador
- Andre Godoi Chiovato

---

## Descrição

Este projeto tem como objetivo o desenvolvimento de um sistema de irrigação inteligente utilizando o microcontrolador ESP32, simulado na plataforma Wokwi. A solução proposta faz parte do contexto da startup fictícia FarmTech Solutions, que busca aplicar tecnologia para otimizar a produção agrícola.

O sistema simula a coleta de dados agrícolas essenciais para tomada de decisão, utilizando sensores adaptados no ambiente virtual. Os níveis de nutrientes do solo (Nitrogênio, Fósforo e Potássio - NPK) são representados por botões digitais, permitindo simular estados binários (ativo/inativo). O pH do solo é representado por um sensor LDR (sensor de luz), que fornece dados analógicos, enquanto a umidade do solo é simulada através do sensor DHT22.

Com base nesses dados, o sistema toma decisões automáticas para ativar ou desativar a irrigação, representada por um relé (bomba d’água). A lógica implementada considera condições específicas de umidade e qualidade do solo, permitindo simular um ambiente de agricultura de precisão.

O projeto também abre possibilidade para integração com APIs externas (como dados climáticos) e análise de dados em R, ampliando o uso de conceitos de Internet das Coisas (IoT), automação e Data Science.

O principal objetivo é demonstrar como tecnologias digitais podem ser aplicadas no agronegócio para reduzir desperdícios, melhorar a eficiência no uso da água e aumentar a produtividade.

---

## Estrutura de pastas

- **.github**: Arquivos de configuração do GitHub  
- **assets**: Imagens do projeto (ex: circuito do Wokwi)  
- **config**: Arquivos de configuração  
- **document**: Documentação do projeto  
- **scripts**: Scripts auxiliares  
- **src**: Código fonte do ESP32 (C/C++)  
- **README.md**: Documentação principal do projeto  

---

## Como executar o código

### Pré-requisitos:
- Conta no Wokwi: https://wokwi.com  
- Navegador web (Chrome, Edge, Safari)  
- Conhecimento básico em Arduino / C++  

### Passo a passo:

1. Acesse a plataforma Wokwi  
2. Crie um novo projeto com ESP32  
3. Copie o código disponível na pasta `/src` deste repositório  
4. Monte o circuito conforme imagens na pasta `/assets`  
5. Execute a simulação  
6. Interaja com:
   - Botões (NPK)
   - Sensor LDR (pH simulado)
   - Sensor DHT22 (umidade)

7. Observe o acionamento do relé (bomba de irrigação)

---

## Histórico de lançamentos

* 0.1.0 - 22/04/2026  
    * Criação do projeto  
    * Implementação da lógica de irrigação  
    * Estrutura inicial do repositório  

---

## Licença

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg">
<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg">

Este projeto segue o modelo acadêmico FIAP e está licenciado sob:
Attribution 4.0 International (CC BY 4.0)
