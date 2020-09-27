#include<stdio.h>

int somaPonteiro(int *p , int tam){
    int soma=0;

    for(int i=0;i<tam;i++){
        soma+=*p;
        p++;
    }

    return soma;
}

int main(void){
    int v[5] ;
    for(int i=0;i<5;i++){
        scanf("%d",&v[i]);
    }
    int *pVet = v;
    int soma = somaPonteiro(pVet,5);
    printf("\n%d",soma);
   return 0;
}