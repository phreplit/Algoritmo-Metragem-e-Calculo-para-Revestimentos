
//  Author: PHNO - Tecnologo | Pos-Graduado
//  Data Release: 29/11/2024
//  Versao Codigo: 0.0.0.2v
//  Replit: @PHNO, @PHREPLIT
//  E-mail: phreplit@gmail.com

// Algoritmo: Metragem e Calculo para Revestimentos de Ceramica, algoritmo desenvolvido em java, desenvolvido para profissionais da engenharia civil e areas correlatas.

import java.io.IOException;
import java.util.Scanner; // importa lib

public class Main {

public static void main(String[] args) throws IOException, InterruptedException {

loop: // choice Menu
while (true) {

  System.out.println("\n");
  System.out.println("\n");
  System.out.println(" Metragem e Calculo para Revestimentos ");
  System.out.println("");
  System.out.println("");
  System.out.println("1. Calcular Metro Quadrado de um Comodo");
  System.out.println("2. Calcular Quantidade de Ceramicas por M. Q.");
  System.out.println("3. Calcular Quantidade de Caixas de C. por M. Q.");
  System.out.println("4. Sair");
  System.out.println("");
  System.out.println("[8] Info");
  System.out.println("[9] Sobre "); // about
  
  System.out.println("\nEscolha uma opcao: ");

Scanner scanner = new Scanner(System.in);

int choice = scanner.nextInt();

try {
  
switch (choice) {
  case 1:
	System.out.println("\n");
	System.out.println("Digite o comprimento do comodo: ");
	int v1 = scanner.nextInt();
	System.out.println("\n");
	System.out.println("Digite a largura do comodo: ");
	int v2 = scanner.nextInt();
	System.out.println("\n");
	int resultado = (v1 * v2);
	System.out.println("O comodo tem " + (resultado) + " metros quadrados.");
        Scanner scanner1 = new Scanner(System.in);
        System.out.println("\nTeclar enter para retornar ao menu...\n");
        String enter = scanner1.nextLine();
        clear(); 
       break;
  case 2:
	int v4 = 4;
	System.out.println("\n");
	System.out.println("Digite quantos metros quadrados tem o comodo: ");
        int v3 = scanner.nextInt();
	System.out.println("\n");
        int result = (v3 * v4);
        System.out.println("Para alicerçar " + (v3) + " M. Q. de um comodo sera necessario, " + (result) + " ceramica(s).\n");
        Scanner scanner2 = new Scanner(System.in);
        System.out.println("\nTeclar enter para retornar ao menu...\n");
        String enter2 = scanner2.nextLine();
        clear(); 
        break;
  case 3:
	int v6 = 4; // 1 metro quadrado
	int cx1 = 8; // 1 caixa ceramica
	System.out.println("\n");
	System.out.println("Digite quantos metros quadrados tem o comodo: ");
	int v5 = scanner.nextInt();
	System.out.println("\n");
	int result1 = (v5 * v6);
	int calcqtdcaixa = (result1 / cx1);
	System.out.println("Para alicerçar " + (v5) + " M. Q. de um comodo sera necessario, " + (calcqtdcaixa) + " caixas de ceramica.\n");
	Scanner scanner3 = new Scanner(System.in);
        System.out.println("\nTeclar enter para retornar ao menu...\n");
        String enter3 = scanner3.nextLine();
        clear();
        break;
  case 4:
    System.out.println("\n Algoritmo Finalizado!  ");
  break loop;
  case 8:
  clear();
  System.out.println("\n");
  System.out.println("Info");
  System.out.println("");
  System.out.println("Para Calcular o Metro Quadrado de um Comodo:");
  System.out.println("Calculamos o comprimento x a largura, veja como exemplo um comodo com (3,70 metros de comprimento x 2,70 metros de largura) temos que C x L = a 10MQ.");
  System.out.println("");
  System.out.println("Para Calcular Revestimentos de Ceramica:");
  System.out.println("Com base em uma placa ceramica de 50cm x 50cm entao temos que 2 x 2 placas ceramicas = 4 placas ceramicas o que equivale a 1MQ, esse sera o padrao do calculo 4 placas ceramicas = 1MQ, entao tem se que Quaisquer (N) metros quadrados x 4 = a (N) quantidade de placas por metro quadrado.");
  System.out.println("");
  System.out.println("Para Calcular Quantidade de Caixas de Ceramica: ");
  System.out.println("Sabendo que cada caixa tem 8 placas de ceramica, entao para cada 1 caixa de ceramica temos 2mq, e ent o Quaisquer (N) metros quadrados x 4(um mq) = (N) quantidade de ceramicas e esse resultado dividido por uma caixa (8) = a (N) quantidade de caixas de ceramica para alicerçar um comodo.");
  System.out.println("");
  System.out.println("Informacao Importante: ");
  System.out.println("");
  System.out.println("Este algoritmo foi desenvolvido com variaveis inteiras entao nao aceita numeros com virgula ex: 2,90 metros mude para 3 metros.");
  System.out.println("");
  Scanner scanner7 = new Scanner(System.in);
  System.out.println("\nTeclar enter para retornar ao menu...\n");
  String enter7 = scanner7.nextLine();
  clear();
  break;
  case 9:
  clear();
  System.out.println("\n");
  System.out.println("Algoritmo: Metragem e Calculo para Revestimentos");
  System.out.println("");
  System.out.println("Author: PHNO ");
  System.out.println("Data Release: 29/11/2024");
  System.out.println("Versao Codigo: 0.0.0.2v");
  System.out.println("Replit: @PHNO, @PHREPLIT");
  System.out.println("E-mail: phreplit@gmail.com");  
  System.out.println("");
  Scanner scanner8 = new Scanner(System.in);
  System.out.println("\nTeclar enter para retornar ao menu...\n");
  String enter8 = scanner8.nextLine();
  clear();
  break;
  default:
    Scanner scanner9 = new Scanner(System.in);
    System.out.println("\n Erro, Opcao Incorreta! ");
    System.out.println("\nTeclar enter para retornar ao menu...\n");
    String enter9 = scanner9.nextLine();
    clear();
}
  } catch (Exception e) {
  Scanner scanner9 = new Scanner(System.in);
  System.out.println("\nErro, falha no sistema!");
  System.out.println("\nTeclar enter para retornar ao menu...\n");
  String enter9 = scanner9.nextLine();
  clear();
  }            
}
}
public static void clear() {
     System.out.print("\033[H\033[2J"); // clear screen
     System.out.flush();
}
}