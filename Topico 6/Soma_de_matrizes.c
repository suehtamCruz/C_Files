#include<stdio.h>
int *pCol;

void soma_matrizes(int m1[][*pCol], int m2[][*pCol], int lin, int col, int mSoma[][*pCol]){

    for(int l=0;l<lin;l++){
        for(int c=0;c<col;c++){
            mSoma[l][c] = m1[l][c] + m2[l][c];
        }
    }
}
int main(void){
    int lin,col;
    scanf("%d%d",&lin,&col);
    pCol = &col;
   
    int matriz1[lin][col];
    int matriz2[lin][col];

    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matriz1[i][j]);
        }
    }

    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matriz2[i][j]);
        }
    }
    int somaMatriz[lin][col];

    soma_matrizes(matriz1,matriz2,lin,col,somaMatriz);
    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            if(j==(col-1)){
                printf("%d",somaMatriz[i][j]);
            }else{
                printf("%d ",somaMatriz[i][j]);
            }
        }printf("\n");
    }
    return 0;
}