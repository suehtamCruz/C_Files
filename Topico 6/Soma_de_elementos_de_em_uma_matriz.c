#include<stdio.h>

int *soma_elementos(int m[][3]){
    int soma=0;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            soma+=m[i][j];
        }
    }
    int *pSoma = &soma;
    return pSoma;
}

int main(void){
    int matriz[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    int *pSoma = soma_elementos(matriz);
    printf("%d\n",*pSoma);
    return 0;
}