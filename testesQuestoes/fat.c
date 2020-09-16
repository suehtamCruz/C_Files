#include<stdio.h>

int fatorial(int n){
    int res = 0;    

    if(n ==0){
        res = 1;
    }else{
        res = n * fatorial(n - 1 );
    }
    return res;
}

int main(void){
    int num;
    scanf("%d",&num);
    int fat = fatorial(num);
    printf(".%d",fat);

    return 0;
}