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

float populacao;
float area;
float PIB;
int pontos;
char Cidade [20];


printf("\n\nS u p er  -  t r u n fo - LÓGICA! \n"); // tema do jogo
printf("--------------------------------\n");
printf("\nA01 - BRASIL \n\n"); // título

          printf("ESTADO -CEARA\n\n"); // subtítulo Enfatizando o estado

        printf("Digite a cidade: \n"); // digite a cidade
        scanf("%s", &Cidade); // armazenando os dados digitados pelo o úsuario
            printf("Digite a população:  \n");
            scanf("%f", &populacao); //armazenando os dados digitados pelo o úsuario
              printf("Digite a area em (km2): \n");
              scanf("%f", &area); //armazenando os dados digitados pelo o úsuario
                printf("Digite o PIB: \n");
                scanf("%f", &PIB); //armazenando os dados digitados pelo o úsuario
                  printf("Digite a quantidade de pontos turisticos: \n");
                  scanf("%d", &pontos); //armazenando os dados digitados pelo o úsuario
printf("----------------------------------------------\n"); 
printf("\nPaís BRASIL!!"); //apresentação na tela para o usuário.
printf("\n\nCOD-A01 - ( ESTADO DO CEARA )\n"); //apresentação na tela para o usuário.
printf("Cidade: %s\n", Cidade); //apresentação na tela para o usuário.
printf("\nPopulação é: %.3f de habitantes\n", populacao); //apresentação na tela para o usuário.
printf("Area total em (km2) é de: %.3f\n", area); //apresentação na tela para o usuário.
printf("O PIB é de: R$:%.2f de reais\n", PIB); //apresentação na tela para o usuário.
printf("Pontos turisticos: %d\n\n\n", pontos); ////apresentação na tela para o usuário

                                       // fim do bloco de cadastro primeira CARTA 01

printf("--------------------------------\n");
printf("\nA02 - BRASIL \n\n"); // título

          printf("ESTADO - SÃO PAULO\n\n"); // subtítulo enfatizando o estado (para experiência do usário na tela)

        printf("Digite a cidade: \n"); // digite a cidade
        scanf("%s", &Cidade); // armazenando os dados digitados pelo o úsuario
            printf("Digite a população:  \n");
            scanf("%f", &populacao); // armazenando os dados digitados pelo o úsuario
              printf("Digite a area em (km2): \n");
              scanf("%f", &area); // armazenando os dados digitados pelo o úsuario
                printf("Digite o PIB: \n");
                scanf("%f", &PIB); // armazenando os dados digitados pelo o úsuario
                  printf("Digite a quantidade de pontos turisticos: \n");
                  scanf("%d", &pontos); // armazenando os dados digitados pelo o úsuario
printf("----------------------------------------------\n");
printf("\nPaís BRASIL!!"); //apresentação na tela para o usuário.
printf("\n\nA02 - ( SÃO PAULO )\n"); //apresentação na tela para o usuário.
printf("Cidade:%s \n", Cidade); //apresentação na tela para o usuário.
printf("População é: %.3f de habitantes\n", populacao); //apresentação na tela para o usuário.
printf("Area total em (km2) é de: %.3f\n", area); ///apresentação na tela para o usuário.
printf("O PIB é de: R$:%.2f de reais\n", PIB); //apresentação na tela para o usuário.
printf("Pontos turisticos: %d\n\n\n", pontos); //apresentação na tela para o usuário.

                                              // fim do bloco de cadastro primeira CARTA 02

printf("\n\n----------------------------------------------\n\n");
printf("A CARTA VECEDORA É: \n");



    return 0;
}
