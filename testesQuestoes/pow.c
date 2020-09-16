#include<stdio.h>

int potencia(int base,int exp){
    int res=1;

    if(exp==0){
        return res;
    }else{
        res = base * potencia(base,exp-1);
        exp--; 
    }
}

int main(void){
    int b,exp;
    scanf("%d%d",&b,&exp);
    
    int pot = potencia(b,exp);
    printf("%d",pot);
    
    return 0;
}