#include<stdio.h>

int main(void){
    int lin=3,col=3;
    int mat[lin][col];
    
    
    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int somaLin=0,somaCol=0;
    for(int l=0;l<lin;l++){
        for(int c=0;c<col;c++){
            somaLin+=mat[l][c];
        }
    }
    for(int c=0;c<col;c++){
        for(int l=0;l<lin;l++){
            somaCol+=mat[l][c];
        }
    }
    int somaDiaEsq=0,somaDiaDire =0;
    
    somaDiaEsq = mat[0][0]+mat[1][1]+mat[2][2];
    somaDiaDire =mat[0][2]+mat[1][1]+mat[2][0];

    if(somaDiaEsq!=somaDiaDire){
        printf("nao\n");
        return 0;
    }
    else if( (somaLin/3) != (mat[0][0]+mat[0][1]+mat[0][2]) ){
        printf("nao\n");
        return 0;
    }
    else if( (somaCol/3) != (mat[0][0]+mat[1][0]+mat[2][0]) ){
        printf("nao\n");
        return 0;
    }
    else{
        printf("sim\n");
    }
    return 0;
}