#include<stdio.h>
int main(){
    int ini,fim,cont,ci;
    scanf("%d %d",&ini,&fim);
    printf("[");
    cont=fim;
    ci=ini;
    for(ci;ci<=cont;ci++){
        printf(" %d %d",ini,fim);
        ini++;
        fim--;
    }printf(" ]\n");
}