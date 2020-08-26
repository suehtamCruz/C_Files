#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    n>0?printf("positivo\n"):n<0?printf("negativo\n"):printf("nulo\n");
}