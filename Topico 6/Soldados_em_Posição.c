#include<stdio.h>

int main(void){
    int soldiers[3][3];
    int cont=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&soldiers[i][j]);
        }
    }
    for(int col=0;col<3;col++){
        for(int lin=0;lin<2;lin++){
            if(soldiers[lin][col] < soldiers[lin+1][col]){
                cont++;
            }
        }
    }
    printf("%d\n",cont);
    return 0;
}