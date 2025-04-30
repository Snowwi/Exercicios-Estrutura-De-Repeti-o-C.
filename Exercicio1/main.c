#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,numero, total = 0;

    printf("Escreva um numero:");
    scanf("%i", &numero);

    for(n=1;n<=numero;n++)
    {
        if (numero % n == 0){
                if (total > 0){
                    printf(" + ");
                }
                total = total + n;
                printf("%d", n);
        }
    }
    printf(" = %d. \n", total);


    if (total / 2 == numero){
        printf("%d e um numero perfeito!");
    }
}
