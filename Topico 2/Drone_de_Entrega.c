#include<stdio.h>

int entrega(int caixa[],int janela[]){
    int alt=0,larg=0;

    for(int i=0;i<3;i++){
        if(caixa[i]<=janela[0]){
            alt = 1;
        }
        if(caixa[i]<=janela[1]){
            larg = 1;
        }
    }   
    int passa = larg+alt;
    return passa;
}

int main(void){
    int box[3],wind[2];

    for(int i=0;i<3;i++){
        scanf("%d",&box[i]);
    }
    for(int i=0;i<2;i++){
        scanf("%d",&wind[i]);
    }
    int isPossible = entrega(box,wind);
    isPossible==2 ? printf("S\n") : printf("N\n"); 
    return 0;
}