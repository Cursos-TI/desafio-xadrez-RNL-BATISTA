#include <stdio.h>

int main (){
    int torre=0, bispo = 0, queen, cavalo1, cavalo2=1;
    //Declarando variaves
    printf("Torre\n");
    //Movimento torre
    while(torre < 5){
        printf("Torre Direita (%d)\n", torre);
        torre++;
        
    }
    printf("Bispo\n"); //Espaçamento para melhor entender as respostas.
   //Movimento bispo
    do{
        printf("Bispo Cima Direta (%d)\n", bispo);
        bispo++;
       
    }while (bispo<5);
    printf("Rainha\n"); //Espaçamento para melhor entender as respostas.
    //Movimento rainha
    for (queen = 0; queen < 8; queen++)
    {
        printf("Rainha Esquerda (%d)\n", queen);
        
    }
    printf("Cavalo\n"); //Espaçamento para melhor entender as respostas.
    for(cavalo1=1; cavalo1<2; cavalo1++)
    {
        while(cavalo2<=2){
            printf("Baixo\n");
            cavalo2++;
        }
        printf("Esquerda\n");
    }
}