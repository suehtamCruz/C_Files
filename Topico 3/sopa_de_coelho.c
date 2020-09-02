#include<stdio.h>

int main(void){
    int tam;
    scanf("%d",&tam);
    
    long int fibo[100];
    fibo[0]=1;
    fibo[1]=1;
    
    if(tam>2){
        for(int i=2;i<tam;i++){
            fibo[i] = fibo[i-1] + fibo[i-2]; 
        }
        printf("%ld\n",fibo[tam-1]);
    }
    if(tam<2){
        printf("1\n");
    }
    return 0;
}