#include<stdio.h>

int divPrime(int n){
    int soma =0;
    int cont=0;
    int primes[n],p=0;

    if(n==1){
        return 1;
    }else if(n==0){
        return 0;
    }else{
        for(int i=3;i<=n;i++){
            for(int j = 2;j<=n;j++){
                if(i%j==0){
                    cont++;
                }
            }
            if(cont==1){
                primes[p] = i;
                p++;
            }
        }
    }
    for(int i=2;i<n;i++){
        for(int j=0;j<n;j++){
            if(primes[j] != '\0'){
                if(i%primes[j]==0){
                    soma+=primes[j];
                }
            }
        }
    }
    return soma;
}

int main(void){
    int num;
    scanf("%d",&num);
    int sum = divPrime(num);
    printf("%d",sum);
    return 0;
}