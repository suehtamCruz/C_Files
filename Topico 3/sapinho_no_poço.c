#include<stdio.h>
int main(){
    int esc=0,sal,top;
    scanf("%d%d%d",&top,&sal,&esc);
    for(int i=0;i<=top;i+=(sal-esc)){
        printf("%d ",i);
        if((sal+i)>=top){
            printf("saiu\n");
            i=(top+1);
        }else{
           printf("%d\n",(sal+i)); 
        }
    }
}