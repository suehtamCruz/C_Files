#include<stdio.h>
char alf(int n){
    char let[27]={'-','a','b','c','d','e','f','g','h','i','j','k','l',
                 'm','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    return (char)let[n];
}
int main(){
    int soma;
    scanf("%d",&soma);
    if(soma==0){
        printf("joguem de novo\n");
    }else{
        soma<=26?printf("%c\n",(char)alf(soma)):printf("%c\n",(char)alf(soma%26));
    }  
}