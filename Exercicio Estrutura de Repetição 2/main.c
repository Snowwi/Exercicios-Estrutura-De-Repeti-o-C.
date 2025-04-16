#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, mult;
    int cont = 0;
    printf("escreva o numero A\n");
    scanf("%i", &a);
    printf("escreva o numero B\n");
    scanf("%i", &b);

    while(cont < a){
        mult = mult + b;
        cont++;
    }
    printf("a*b = %i\n", mult);
}
