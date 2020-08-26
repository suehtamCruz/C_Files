#include<stdio.h>
int ganha(int n1,int n2,int n3){
    int n;
    if(n1==n2&&n2==n3){
        n= 0;
    }
    else if(n1!=n2&&n2==n3){
        n= 1;
    }
    else if(n2!=n1&&n1==n3){
        n= 2;
    }
    else if(n3!=n1&&n1==n2){
        n=3;
    }
    return n;
}
int main(){
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    if(ganha(n1,n2,n3)==0){
        printf("empate\n");
    }else{
    printf("jog%d\n",ganha(n1,n2,n3));
}
}