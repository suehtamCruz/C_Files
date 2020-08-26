#include<stdio.h>
int cont(int n1, int n2, int n3){
    int cont=0;
    if(n1!=n2&&n1!=n3&&n2!=n3){
        return cont;
    }
    else if(n1==n2 && n2==n3){
        return cont+=3;
    }
    else{
        if(n1==n2){
            cont+=2;
        }if(n2==n3){
            cont+=2;
        }
}   return cont;}
int main(){
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    printf("%d\n",cont(n1,n2,n3));
    }