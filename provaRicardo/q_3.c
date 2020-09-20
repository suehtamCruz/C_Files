#include<stdio.h>


void maiorDivisor(int n , int *pn ,int *pd){
 

    int mdc=0;
    int numerador=0;
    int denominador=0;
 
    for(int i=1;i<=n;i++){
        denominador+=i;
        numerador++;
    }   
    int  *pdenomi = &denominador;
    int *pnumer = &numerador;


    for(int i=1;i<=denominador;i++){
        if(numerador%i==0 && denominador%i==0){
            mdc = i;
        }
    }
    *pd = *pdenomi / mdc;
    *pn = *pnumer / mdc;
}

int main(void){
 
    int n;
    scanf("%d",&n);
    int denominador;
    int numerador;
    maiorDivisor(n,&numerador,&denominador);
    printf("%d,%d",&numerador,&denominador);
}