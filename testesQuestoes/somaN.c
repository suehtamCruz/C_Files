#include<stdio.h>

int somaNumeros(int n){
    int soma = 0;
    
    if(n>0){
        soma = n + somaNumeros(n-1);
    }
    
    return soma;
}

int main(void){
    int n;
    scanf("%d",&n);
    int soma = somaNumeros(n);
    printf("%d",soma);
    return 0;
}