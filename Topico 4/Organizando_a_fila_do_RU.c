#include<stdio.h>

int main(void){
    int tam;
    scanf("%d",&tam);
    
    int pess[tam];
    int par[tam],impar[tam];
    int contPar=0,contImp=0;

    for(int i=0;i<tam;i++){
        scanf("%d",&pess[i]);
    }
    
    int tamPar=0,tamImpar=0;
    
    for(int i=0;i<tam;i++){
        if(pess[i]%2==0 ){
            par[tamPar]=pess[i];
            contPar++;
            tamPar++;
        }else{
            impar[tamImpar]=pess[i];
            contImp++;
            tamImpar++;
        }
    }
    //impressao do vetor impares
    if(contImp==0){
        printf("[ ]\n");
    }else{
        printf("[ ");
        for(int i=0;i<contImp;i++){
            printf("%d ",impar[i]);    
        }printf("]\n");   
    }
    //impressao do vetor par
    if(contPar==0){
        printf("[ ]\n");
    }else{
            printf("[ ");
            for(int i=0;i<contPar;i++){
                printf("%d ",par[i]);
            }
            printf("]\n");
    }

    return 0;
}