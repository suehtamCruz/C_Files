#include<stdio.h>

int times=0;

int main(void){
    int tam;
    scanf("%d",&tam);
    int plays[tam][2];
    int aldo,beto;

    for(int i=0;i<tam;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&plays[i][j]);
        } 
    }  
    for(int i=0;i<tam;i++){
       
        if(plays[i][0] > plays[i][1]){
            aldo++;
        }
        
        else if(plays[i][0] < plays[i][1]){
            beto++;
        }
        else{
            aldo++;
            beto++;
        }
    }

    printf("Teste %d\n",times+=1);
    aldo==beto ? printf("Empate\n") : 0;
    aldo>beto ? printf("Aldo\n") : printf("Beto\n");
   
    return 0;
}