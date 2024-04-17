
//  Author: PHNO - Tecnólogo | Pós-Graduado
//  Data Release: 07/11/2023
//  Versao Codigo: 2.0.1v
//  Replit: @PHNO, @PHREPLIT
//  Email: phreplit@gmail.com

// Algoritmo: Metragem e Calculo para Revestimentos de Ceramica, algoritmo desenvolvido em c, desenvolvido para profissionais da engenharia civil e areas correlatas.

#include <stdio.h> // importa lib
#include <stdlib.h> 
#include <math.h> 

int menu(); 
void op1(); 
void op2(); 
void op3();
void op4();
void op8();
int menu_developer();

int menu() { // Funcao Menu  
int op, c;

printf("\n\t Metragem e Calculo para Revestimentos \n");

printf("\n");
printf("\n\t     Menu    \n");
printf("\n");

printf("\n1. Calcular Metro Quadrado de um Comodo"); // ex: sala
printf("\n2. Calcular Quantidade de Ceramicas por M²");
printf("\n3. Calcular Quantidade de Caixas de C. por M²");
printf("\n4. Sair\n");

printf("\n[8] Info\n");

printf("\n[9] Sobre \n");

printf("\nDigite sua escolha: ");
scanf("%d", &op);

while ((c = getchar()) != '\n' && c != EOF) {} // limpar o buffer do teclado.   
return op; 
}

int main() { // Funcao principal

int op, c;

while (op != -1) { 
op = menu(); 
switch (op) { 
case 1: 
op1(); // funcao 
break; 
case 2: 
op2(); // funcao 
break; 
case 3: 
op3(); // funcao 
break;
case 4:
printf("\n");
printf("\n Algoritmo Finalizado! \n"); // Ao Sair
printf("\n");
return 0;
break;
case 8:
op8(); // funcao
break;
case 9:
menu_developer();
break; 
default: 
printf("\n");
printf("Opcao Invalida!\n");
printf("\n");
//printf("\n");
printf("\nTeclar enter para retornar ao menu...\n");
getchar();
scanf("c\n");
system("clear");      // linux limpar tela
system("tput reset"); // linux limpar
} 
} 
return 0; 
} 

void op1() { 
int v1;
int v2;
int resultado;
printf("\n");
printf("\nDigite o comprimento do comodo: ");
scanf("%d", &v1, stdin);
printf("\n");
printf("\nDigite a largura do comodo: ");
scanf("%d", &v2, stdin);
resultado = v1 * v2;
printf("\nO comodo tem %d metros quadrados.\n", resultado);
// system("pause"); // pausa tela windows
// system("Cls"); // limpa tela windows
//printf("\n"); // pula linha
printf("\nTeclar enter para retornar ao menu...\n");
getchar();
scanf("c\n");
system("clear");      // linux limpar tela
system("tput reset"); // linux limpar
return; 
}

void op2() { 
int v1;
int v2 = 4;
int resultado;

printf("\n");
printf("\nDigite quantos metros quadrados tem o comodo: ");
scanf("%d", &v1, stdin);
printf("\n");

resultado = (v1 * v2);

printf("\nPara alicerçar %d M² de um comodo sera necessario %d ceramica(s).\n", v1, resultado);
// system("pause"); // pausa tela windows
// system("Cls"); // limpa tela windows
//printf("\n"); // pula linha
printf("\nTeclar enter para retornar ao menu...\n");
getchar();
scanf("c\n");
system("clear");      // linux limpar tela
system("tput reset"); // linux limpar
return; 
}

void op3() {
int v1;
int v2 = 4; // 1 metro quadrado
int resultado;
int calcqtdcaixa;
int cx1 = 8; // 1 caixa de ceramica

printf("\n");
printf("\nDigite quantos metros quadrados tem o comodo: ");
scanf("%d", &v1, stdin);
printf("\n");

resultado = (v1 * v2);
calcqtdcaixa = (resultado / cx1);

printf("\nPara alicerçar %d M² de um comodo sera necessario %d caixas de ceramica.\n", v1, calcqtdcaixa);

// system("pause"); // pausa tela windows
// system("Cls"); // limpa tela windows
//printf("\n"); // pula linha
printf("\nTeclar enter para retornar ao menu...\n");
getchar();
scanf("c\n");
system("clear");      // linux limpar tela
system("tput reset"); // linux limpar
return; 
}

void op8() {
system("clear");      // linux
system("tput reset"); // linux
printf("\nInfo\n");
printf("\nEste algoritmo foi desenvolvido com variaveis inteiras entao nao aceita numeros com virgula ex: 2,90 metros mude para 3 metros.\n");
printf("\nPara Calcular o Metro Quadrado de um Comodo:\n");
printf("\nCalculamos o comprimento x a largura, veja como exemplo um comodo com (3,70 metros de comprimento x 2,70 metros de largura) temos que C x L = a 10M².\n");
printf("\nPara Calcular Revestimentos de Ceramica:\n");
printf("\nCom base em uma placa ceramica de 50cm x 50cm entao temos que 2 x 2 placas ceramicas = 4 placas ceramicas o que equivale a 1M², esse sera o padrao do calculo 4 placas ceramicas = 1M², então tem se que Quaisquer (N) metros quadrados x 4 = a (N) quantidade de placas por metro quadrado.\n");
printf("\nPara Calcular Quantidade de Caixas de Ceramica: \n");
printf("\nSabendo que cada caixa tem 8 placas de ceramica, entao para cada 1 caixa de ceramica temos 2m², e então Quaisquer (N) metros quadrados x 4(um m²) = (N) quantidade de ceramicas e esse resultado dividido por uma caixa (8) = a (N) quantidade de caixas de ceramica para alicerçar um comodo.\n");
printf("\n Teclar enter para retornar ao menu...\n ");
getchar();
scanf("c\n");
system("clear");      // linux
system("tput reset"); // linux

return;
}

int menu_developer(){
  system("clear");      // linux
  system("tput reset"); // linux
  printf("\n Algoritmo: Metragem e Calculo para Revestimentos \n");
  printf("\n Author: PHNO ");
  printf("\n Data Release: 07/11/2023 ");
  printf("\n Versao Codigo: 2.0.1v");
  printf("\n Replit: @PHNO, @PHREPLIT");
  printf("\n Email: phreplit@gmail.com \n");
  printf("\n Teclar enter para retornar ao menu...\n ");
  getchar();
  scanf("c\n");
  system("clear");      // linux
  system("tput reset"); // linux
    return 0;
}
