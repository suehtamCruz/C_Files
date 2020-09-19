#include<stdio.h>

int maiorDivisor(int n){
  
    int mdc=0;
    int cont=0;
    int somaBase=0;

    for(int i=1;i<=n;i++){
        somaBase+=i;
        cont++;
    }   
    for(int i=1;i<=somaBase;i++){
        if(cont%i==0 && somaBase%i==0){
            mdc = i;
        }
    }
    return mdc;
}

int main(void){

    int n;
    scanf("%d",&n);
    int mdc = maiorDivisor(n);

    printf("%d",mdc);
}