#include <stdio.h>

void moverTorre(int t){
    if(t>0){
        moverTorre(t-1);
        printf("Torre Direita (%d)\n", t);
    }
}

void moverBispo(int b){
    if(b>0){
        moverBispo(b-1);
        printf("Bispo Direita (%d)\n", b);
    }
}

void moverQueen(int q){
    if(q>0){
        moverQueen(q-1);
        printf("Rainha Esquerda (%d)\n", q);
    }
}

int main (){
    int cavalo1, cavalo2=1;

    moverTorre(5);
    printf("\n");

    moverBispo(5);
    printf("\n");

    moverQueen(8);
    printf("\n");
    //Movimento torre

    for(cavalo1=1; cavalo1<2; cavalo1++)
    {
        while(cavalo2<=2){
            printf("Cima\n");
            cavalo2++;
        }
        printf("Direita\n");
    }
}