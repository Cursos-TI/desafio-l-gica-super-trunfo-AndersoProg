#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

float populacao1;
float populacao2;
float area1;
float area2;
float PIB1;
float PIB2;
int pontos;


printf("\n\nS u p e r  -  t r u n f o -  COMPARATIVO DE CARTAS ! \n"); // tema do jogo
printf("----------------------------------------\n");
printf("\nPAÍS BRASIL \n\n"); // título
printf("A01\n");

      printf("ESTADO -CEARA\n"); // subtítulo Enfatizando o estado
        printf("CIDADE : FORTALEZA: \n");
            printf("\nDigite a população:  \n");
            scanf("%f", &populacao1); //armazenando os dados digitados pelo o úsuario
              printf("Digite a area em (km2): \n");
              scanf("%f", &area1); //armazenando os dados digitados pelo o úsuario
                printf("Digite o PIB: \n");
                scanf("%f", &PIB1); //armazenando os dados digitados pelo o úsuario
                  printf("Digite a quantidade de pontos turisticos: \n");
                  scanf("%d", &pontos); //armazenando os dados digitados pelo o úsuario
printf("- - - \n"); 
printf("\nPaís BRASIL!!"); //apresentação na tela para o usuário.
printf("\n\nCOD-A01 - ( ESTADO DO CEARA )\n"); //apresentação na tela para o usuário.
printf("- CIDADE : FORTALEZA: \n"); //apresentação na tela para o usuário.
printf("\n- População é: %.3f de habitantes\n", populacao1); //apresentação na tela para o usuário.
printf("- Area total em (km2) é de: %.3f\n", area1); //apresentação na tela para o usuário.
printf("- O PIB é de: R$:%.2f de reais\n", PIB1); //apresentação na tela para o usuário.
printf("- Pontos turisticos: %d\n\n\n", pontos); ////apresentação na tela para o usuário

                                       // fim do bloco de cadastro primeira CARTA 01

printf("--------------------------------\n");
printf("\nPAÍS- BRASIL \n\n"); // título
      printf("A02\n");
        printf("ESTADO - SÃO PAULO\n"); // subtítulo enfatizando o estado (para experiência do usário na tela)
          printf("CIDADE: GUARULHOS: \n");
            printf("\nDigite a população:  \n");
            scanf("%f", &populacao2); // armazenando os dados digitados pelo o úsuario
              printf("Digite a area em (km2): \n");
              scanf("%f", &area2); // armazenando os dados digitados pelo o úsuario
                printf("Digite o PIB: \n");
                scanf("%f", &PIB2); // armazenando os dados digitados pelo o úsuario
                  printf("Digite a quantidade de pontos turisticos: \n");
                  scanf("%d", &pontos); // armazenando os dados digitados pelo o úsuario
printf("- - - \n");
printf("\nPaís BRASIL!!"); //apresentação na tela para o usuário.
printf("\n\nA02 - ( SÃO PAULO )\n"); //apresentação na tela para o usuário.
 printf(" CIDADE: GUARULHOS: \n"); //apresentação na tela para o usuário.
printf("\n-População é: %.3f de habitantes\n", populacao2); //apresentação na tela para o usuário.
printf("- Area total em (km2) é de: %.3f\n", area2); ///apresentação na tela para o usuário.
printf("- O PIB é de: R$:%.2f de reais\n", PIB2); //apresentação na tela para o usuário.
printf("- Pontos turisticos: %d\n\n\n", pontos); //apresentação na tela para o usuário.

                                              // fim do bloco de cadastro primeira CARTA 02

printf("\n\n----------------------------------------------\n\n");

printf (" APURAÇÃO DO RESULTADO :) \n\n"); //titulo que aparecera na tela do usuário

printf("\n\nA CARTA VECEDORA DE MAIOR POPULAÇÃO É: \n"); 

if (populacao1 >= populacao2){  // TESTE, se a população da cidade 1 é maior que a cidade 2.
   printf("-O Estado do Ceara representado pela Cidade de Fortaleza\n\n"); // se a resposta for SIM, exiba esse texto para o usuário
   } else {  // caso não, 
  printf(" -O Estado de São Paulo, representado por Guarulhos\n"); // exiba esse texto para o usuário
   }

printf("\n\nA CARTA VECEDORA DE MAIOR ARRECADAÇÃO PIB: \n");
if(PIB1 >= PIB2){  // TESTE, se o PIB da cidade 1 é maior que a cidade 2.
 printf("-O Estado do Ceara representado pela Cidade de Fortaleza\n"); // se a resposta for SIM, exiba esse texto para o usuário
}else { // caso não, 
  printf("-O Estado de São Paulo, representado por Guarulhos\n"); // exiba esse texto para o usuário
   }

printf("\n\nA CARTA VECEDORA DE MENOR AREA TERRITORIAL EM (KM2): \n");
if(area1 <= area2){  // TESTE, se a area da cidade 1 é menor que a cidade 2.
 printf("-O Estado do Ceara representado pela Cidade de Fortaleza"); // se a resposta for SIM, exiba esse texto para o usuário
}else { // caso não, 
  printf("-O Estado de São Paulo, representado por Guarulhos\n\n"); // exiba esse texto para o usuário
   }

printf("\n\nParabéns\n\n"); //imprime para o usuário.

return 0;
}
    

