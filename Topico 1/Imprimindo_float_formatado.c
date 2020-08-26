#include<stdio.h>
int main(){
    int n1,n2,rest;
    float divi;

    scanf("%d %d",&n1,&n2);
    
    rest=(int)n1%n2;

    divi = (float)n1/n2;

    printf("%d\n%d\n%d\n%.2f\n%d\n",(n1+n2),(n1-n2),(n1*n2),divi,rest);
}