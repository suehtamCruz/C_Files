#include<stdio.h>
int pos(int n){
    if(n<0){
        n*=-1;
        return n;
    }
    return n;
}
int main(){
    int t,c1,c2;
    scanf("%d%d%d",&t,&c1,&c2);
    c1-=t;
    c2-=t;
    if(pos(c1)==pos(c2)){
        printf("empate\n");
    }else{
        if(pos(c1)<pos(c2)){
            printf("primeiro\n");
        }
        else if(pos(c2)<pos(c1)){
            printf("segundo\n");
        }
    }
}