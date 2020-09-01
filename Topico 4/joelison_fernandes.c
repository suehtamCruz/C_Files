#include<stdio.h>
int sumBigLow(int vet[]){
    int big,low,sum;
    for(int i=0;i<5;i++){
        if(i==0){
            big=vet[i];
            low=vet[i];
        }
        if(vet[i]>big){
            big=vet[i];
        }
        if(vet[i]<low){
            low = vet[i];
        }
    }
    sum = big+low;
    return sum;
}
int main(void){
    int num[5];
    for(int i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    int soma = sumBigLow(num);
    printf("%d\n",soma);
    return 0;
}