#include<stdio.h>

int soma_diagonalPrincipal(int m[][5]){
    int soma = 0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j){
                soma += m[i][j];
            }
        }
    }
    return soma;
}

int soma_diagonalSecundaria(int m[][5]){
    int soma =0;
    int linha =0;
    for(int c=4;c>=0;c--){
        soma += m[linha][c];
        linha++;
    }
    return soma;
}
int main(void){
    int matriz[5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    int principal = soma_diagonalPrincipal(matriz);
    int secundaria = soma_diagonalSecundaria(matriz);
    printf("%d\n",(principal - secundaria));

    return 0;
}