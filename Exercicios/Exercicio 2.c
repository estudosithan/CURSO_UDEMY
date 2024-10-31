#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int n, b,soma=0;

    printf("\n\n");
    printf("--- CALCULO DA MEDIA DE UM VETOR---\n\n");
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &b);

    float vet[b],media; //tem que ser declarado aqui por que o vetor não aceita como parâmetro variáveis, logo a variável tem que ser "descoberta" antes de ser utilizada como parâmetro para o vetro. Obs: isso só acontece quando dentro do vetor há uma variável//

    for (n = 0; n < b; n++)
    {
        printf("Digite o %d valor: ", n + 1);
        scanf("%f", &vet[n]);
        soma+=vet[n];
    }
    media = soma/b;
    printf("A media do vetor escolhido eh: %.2f",media);
    system("pause");
    return 0;
}
