#include<stdio.h>

int main(){
    int l,r,d;
    
    scanf("%d %d %d",&l,&r,&d);
    
    if(r>l&&r>50){
        d<r?printf("S\n"):printf("N\n");
    }else{
        printf("N\n");
    }
}