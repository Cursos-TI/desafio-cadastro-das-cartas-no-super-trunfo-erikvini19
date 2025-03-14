#include <stdio.h> 

int main() {
 //declaracao de variaveis primeira carta 
     
   char estado [50];
   int populacao;
   float area;
   float pib;
   int pontoturistico;

     //entrada de dados primeira carta 

      printf("estado: \n ");
      scanf("%s", &estado);

      printf("populacao: \n");
      scanf("%f", &populacao);

      printf("area: \n");
      scanf("%f", &area);

      printf("pib: \n");
      scanf("%f", &pib);

      printf("numero de pontos turisticos:  \n");
      scanf("%d", &pontoturistico);


      //declaracao de variavel segunda carta

      char estado2 [50];
      int populacao2;
      float area2;
      float pib2;
      int pontoturistico2;


      //entrada da segunda carta
     
      printf("estado: \n ");
      scanf("%s", &estado2);

      printf("populacao: \n");
      scanf("%f", &populacao2);

      printf("area: \n");
      scanf("%f", &area2);

      printf("pib: \n");
      scanf("%f", &pib2);

    
      printf("numero de pontos turisticos: \n ");
      scanf("%d", &pontoturistico2);

      //exibicao dos dados da primeira carta

      printf("\nestado: %s\n", estado);
      printf("população: %f\n", populacao);
      printf("area: %f\n", area);
      printf("pib: %.2f\n", pib);
      printf("numero de pontos turisticos: %d\n", pontoturistico);

      //exibição dos dados da segunda carta

      printf("\nestado: %s\n", estado2);
      printf("população: %f\n", populacao2);
      printf("area: %f\n", area2);
      printf("pib: %.2f\n", pib2);
      printf("numero de pontos turisticos: %d\n", pontoturistico2);


    return 0;
}
