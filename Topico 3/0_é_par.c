#include<stdio.h>
int par(int n){
    if(n%2!=0){
        n+=1;
    }
    return n;
}
int main(){
    int ini,fim;
    scanf("%d%d",&ini,&fim);
    int s=0;
    ini=par(ini);
    if(ini>fim){
        printf("invalido\n");
    }else{
    while(ini<=fim){
        s+=ini;
        ini+=2;
    }
    printf("%d\n",s);
}
}