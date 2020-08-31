#include<stdio.h>

int main(){
    int angulo;
    scanf("%d",&angulo);
    angulo==0 ? printf("0\n") : 0;
    if(angulo>0){
        printf("%d\n",angulo%360);
    }
    if(angulo<0){
        printf("%d\n",angulo+360);
    }
}