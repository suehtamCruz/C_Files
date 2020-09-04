#include<stdio.h>

int roleta[4][4] ={
        1   ,9  ,27 ,23,
        34  ,20 ,37 ,47,
        30  ,87 ,55 ,69,
        13  ,60 ,99 ,66
}; 
int cartela(int num[]){
    int cont=0;

    for(int v=0;v<6;v++){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(num[v] == roleta[i][j]){
                    cont++;
                }
            }
        }
    
    }   
    return cont;
}
int main(void){
    int numeros[6];
    for(int i=0;i<6;i++){
        scanf("%d",&numeros[i]);
    }
    int acertos = cartela(numeros);
    printf("%d\n",acertos);
    return 0;
}