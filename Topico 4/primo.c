#include<stdio.h>

int isPrime(int n){
    int prime=1;
    if(n==1){
        return 1;
    }else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                prime = 0;
            }
        }
        return prime;
    }

}

int main(void){
    int num;
    scanf("%d",&num);
    int prime = isPrime(num);
    printf("%d\n",prime);
    return 0;
}