#include<stdio.h>
int main(){
    
    int op,n1,n2;
    
    scanf("%d\n%d\n%d",&op,&n1,&n2);
    
    if((n1+n2)%2==0 && op == 0){
        printf("0\n");
    }
    if((n1+n2)%2==0 && op == 1){
        printf("1\n");
    }
    if((n1+n2)%2!=0 && op == 0){
        printf("1\n");
    }
    if((n1+n2)%2!=0 && op == 1){
        printf("0\n");
    }
}