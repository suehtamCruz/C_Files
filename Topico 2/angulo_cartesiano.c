#include<stdio.h>

int main(){
    
    int angulo;
    scanf("%d",&angulo);
    
    if(angulo==0){
        printf("0\n");
    }else{
        if(angulo<0){
            printf("%d\n",(angulo % 360)+360);
        }
        if(angulo>0){
            angulo=(angulo%360);
            printf("%d\n",angulo);
        }
    }
}