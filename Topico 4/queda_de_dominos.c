#include<stdio.h>

int main(void){
    int tam,cont=0;
    scanf("%d",&tam);
    int vet[tam];

    for(int i=0;i<tam;i++){
        scanf("%d",&vet[i]);
    }

    for(int i=0;i<tam-1;i++){
        if(vet[i] <= vet[i+1]){
            cont++;
        }
       
    }
    if(tam==1){
        printf("ok\n");
    }else{
        cont==tam-1?printf("ok\n") : printf("precisa de ajuste\n");
    }
    
    return 0;
}