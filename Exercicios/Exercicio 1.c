#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    int n,x,expoente;
    
    setlocale(LC_ALL,"portuguese");
    printf(" --- CALCULO DE EXPOENTE ---\n\n ");
    printf("Digite um numero nao nulo.Se desejar encerrar, digite um numero nulo: ");
    scanf("%d" ,&n);
    printf("Digite o expoente: ");
    scanf("%d", &x);
    
    expoente = pow(n,x);
    
    if(n == 0){
        printf("Numero inválido digite outro...");
    
    }
    
    while (n != 0){
     
     printf("O resultado da exponenciação é: %g\n",pow(n,x));
     printf("\ndigite outra base: ");
     scanf("%d", &n);
     printf("Digite outro expoente: ");
     scanf("%d" , &x);
    }
}