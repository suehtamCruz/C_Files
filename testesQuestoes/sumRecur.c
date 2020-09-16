#include<stdio.h>

int sum(int v[],int tam){
    int soma=0;
    if(tam>0){    
        tam--;
        soma = v[tam] + sum(v,tam);
    }
    return soma;
}

int main(void){
    int tam;
    scanf("%d",&tam);
    int v[tam];
    for(int i=0;i<tam;i++){
        scanf("%d",&v[i]);
    }
    int soma = sum(v,tam);
    printf("%d",soma);
    return 0;
}