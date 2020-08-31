#include<stdio.h>

int main(){
    int ini,fim,soma=0;
    scanf("%d%d",&ini,&fim);
    if(ini>fim){
        printf("invalido\n");    
    }else{
    for(ini;ini<=fim;ini++){
        if(ini%2==0&&ini%3==0){
            soma+=ini;
        }
    }
    printf("%d\n",soma);
}
}