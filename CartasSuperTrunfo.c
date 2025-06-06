#include <stdio.h> //Biblioteca padrão 
int main(){
printf("***DESAFIO SUPER TRUNFO !*** \n");// mensagem de abertura

    // Declaração de variaveis CARTA 01 

    char Estado1, Codigo1 [5],  Cidade1[50];//Estado é uma string que vai de A-H. O código é uma string curta e cidade string maior.
    int Populacao1, Pontos1; // População total da cidade e o número de pontos turísticos
    float Area1, PIB1,Densidade1,Percapita1;//Área populacional, PIB, Densidade populacional, PIB per Capita. 

    /*Declaração de variaveis CARTA 02 
      Estrutura igual a carta 01*/ 

    char estado2 ,codigo2 [5], cidade2[50]; 
    int populacao2, pontos2;
    float area2 , pib2, densidade2, percapita2;
  
    //Entrada de Dados CARTA 01

    printf("\nCadastro da Carta 1 :\n ");// Mensagem de abertura para descrição de cadastro para carta 01 
     
    printf("\nInsira o Estado (A-H) :");
    scanf(" %c", &Estado1 );// '%c' leitura de somente 1 caractere , " %c" o espaço limpa o buffer

    printf("\nInsira o código (Ex: A09):"); 
    scanf("%s", Codigo1);//Leitura de string 

    printf("\nInsira o Nome da Cidade:"); 
    scanf("%s" , Cidade1);// leitura de string 

    printf("\nInsira o número da população:");
    scanf("%d", &Populacao1);// Leitura de inteiro

    printf("\nInsira a Área:");
    scanf("%f", &Area1);//Leitura de float

    printf("\nInsira o PIB:");
    scanf("%f", &PIB1);//Leitura de float

    printf("\nInsira o número de pontos turísticos:");
    scanf("%d", &Pontos1);//Leitura de inteiro
    

  // Entrada de dados CARTA 02 

    printf("\nCadastro da Carta 2 :\n ");
    printf("Insira o Estado (A-H) :");
    scanf(" %c", &estado2 );

    printf("\nInsira o código (Ex: A09):"); 
    scanf(" %s", codigo2);

    printf("\nInsira o Nome da Cidade:");
    scanf(" %s" , cidade2);

    printf("\nInsira o número da população:");
    scanf(" %d", &populacao2);

    printf("\nInsira a Área:");
    scanf(" %f", &area2);

    printf("\nInsira o PIB:");
    scanf(" %f", &pib2);
    
    printf("\nInsira o número de pontos turísticos:");
    scanf(" %d", &pontos2);

    

  //calculo das variaveis Densidade populacional e PIB percapita
  Densidade1 = Populacao1 / Area1;
  densidade2 = populacao2/ area2; 

  Percapita1 = PIB1* 1000000000/Populacao1; 
  percapita2 = pib2 * 1000000000/populacao2;


    //Saída de dados CARTA 01

      printf("\nCarta 01\n");
      printf("Estado: %c\n", Estado1 );
      printf("Código : %s\n", Codigo1);
      printf("Cidade: %s\n", Cidade1);
      printf("População : %d\n", Populacao1);
      printf("Área : %.2f Km²\n", Area1);
      printf("PIB : %.2f Bilhões de reais\n ", PIB1);
      printf("Número de pontos turísticos : %d\n", Pontos1);
      printf("Densidade Populacional: %.2f hab/km² \n", Densidade1);
      printf("PIB per capita : %.2f reais \n", Percapita1);


  //Saída de dados CARTA 02

     printf("\nCarta 02\n");
     printf("Estado: %c\n", estado2 );
     printf("Código : %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População : %d\n", populacao2);
     printf("Área : %.2f Km²\n", area2);
     printf("PIB : %.2f Bilhões de reais\n ", pib2);
     printf("Número de pontos turísticos : %d\n", pontos2);
     printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
     printf("PIB per capita : %.2f reais \n", percapita2);

    return 0;
   
}
