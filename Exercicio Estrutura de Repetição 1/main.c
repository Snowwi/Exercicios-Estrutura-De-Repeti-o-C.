#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int cont = 1;

    printf("escreva o valor de N\n");
    scanf("%i", &n);

    while(cont <= n){
            if(cont % 2 == 1){
                    printf("%i\n", cont);
            }
            cont++;
    }
}
