# Prática 1

## Exercício 1

Escreva um programa para imprimir o seu primeiro nome em código ASC. Se o seu nome for “Ana”, o seu programa deve imprimir “65 110 97”.

## Exercício 2

Considere o programa abaixo:

#include <stdio.h>

void main() {
  float a = 3.14159, b = 2.71828;
  
  printf(“\nPI = %f”, b);
  printf(“\nEULER = %f”, a);
}

Note que o programador trocou as variáveis que deveriam ser exibidas em cada printf. Assim, altere o programa acima de forma a corrigir o erro do programador. 
O problema é que o programador proibiu que você altere o que ele escreveu e também que digite os valores das constantes novamente. Então, faça isso (1) sem 
alterar nenhuma linha que o programador escreveu e (2) sem escrever novamente as constantes 3.14159 e 2.71828. Dica: troque os valores armazenados em cada variável.

## Exercicio 3

Uma conta poupança foi aberta com um depósito de R$789,54, com rendimentos de 0.56% de juros ao mês. No segundo mês, R$303,20 reais foram depositados nessa conta 
poupança. No terceiro mês, R$58,25 reais foram retirados da conta. Implemente um programa que imprime quanto haverá nessa conta no quarto mês.

Resposta: A conta terá R$1050,91 no quarto mês.

## Exercicio 4

Brutus e Olívia foram ao médico, que disse a eles que ambos estão fora do peso ideal. Ambos discordaram veementemente da afirmação do médico. Para provar que estava 
certo, o médico mostrou o Índice de Massa Corporal (IMC) de ambos, considerando que Brutus tem 1,84m e pesa 122kg e que Olívia tem 1,76m e pesa 45kg. Implemente um 
programa para mostrar o IMC de Brutus e Olívia e qual é a quantidade mínima de quilos que Brutus e Olívia devem perder ou ganhar para atingirem um peso saudável 
segundo a classificação do IMC. Use a seguinte fórmula para cálculo do IMC:

![formula imc](https://latex.codecogs.com/gif.latex?IMC%20%3D%20%5Cfrac%7Bpeso%7D%7Baltura*altura%7D)

A tabela abaixo descreve a classificação para as faixas de IMC.

| IMC | Classificação |
|:----|:---------------|
| < 16 | Magreza Grave |
| 16 a 17 | Magreza Grave |
| 17 a 18.5 | Magreza Grave |
| 18.5 a 25 | Magreza Grave |
| 25 a 30 | Magreza Grave |
| 30 a 35| Magreza Grave |
| 35 a 40 | Magreza Grave |
| > 40 | Magreza Grave |

Resposta: O IMC do Brutus é 36,03 e o IMC da Olívia é 14,53. Brutus precisa perder, no mínimo, (aproximadamente) 37 quilos e Olívia precisa ganhar, no mínimo, 
(aproximadamente) 12 quilos.
