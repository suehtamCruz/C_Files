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
    int v[5] = {1,3,2,2,1};
    int *pVet = v;
    int soma = somaPonteiro(pVet,5);
    printf("\n%d",soma);
   return 0;
}