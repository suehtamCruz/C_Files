#include<stdio.h>

int *somaPonteiro(int *p , int tam){
    int soma=0;
    int v[1];
    for(int i=0;i<tam;i++){
        soma+=*p;
        p++;
    }
    v[0]=soma;
    int *vet = v;
    return vet;
}

int main(void){
    int v[5] ;
    for(int i=0;i<5;i++){
        scanf("%d",&v[i]);
    }
    int *pVet = v;
     
    printf("\n%d",*somaPonteiro(pVet,5));
   return 0;
}