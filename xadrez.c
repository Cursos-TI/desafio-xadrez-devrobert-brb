#include <stdio.h>

void moveBispo(int m)
{
    printf("Direita \n");
    printf("Cima \n");
    if (m > 1) {
        return moveBispo(m-1);
    }
}

int main(){

    //Torre com FOR
    printf("Movendo a torre...\n");
    for (int i=1; i<=5; i++) {
        printf("Direita \n");
    }

    printf("\n\n");

    //Bispo com WHILE
    printf("Movendo o bispo...\n");
    int j = 0;
    while(j < 5) {
        printf("Direita \n");
        printf("Cima \n");
        j++;
    }

    printf("\n\n");

    //Rainha com DO-WHILE
    printf("Movendo a rainha... \n");
    int k = 8;
    do {
        printf("Esquerda \n");
        k--;
    } while (k > 0);

    printf("\n\n");

    //Cavalo com FOR
    printf("Movendo o cavalo... \n");
    for(int l=0; l < 1; l++) {
        for (int m = 0; m < 2; m++) {
            printf("Baixo \n");
        }
        printf("Esquerda \n");
    }

    printf("\n\n");

    printf("Movendo o bispo de forma recursiva \n");
    moveBispo(5);

    return 0;


}
