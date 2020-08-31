#include<stdio.h>
#include<math.h>
int main(){
    float ele,cim,bai;
    int num;
    scanf("%d",&num);
    ele = pow(num,0.5);
    cim = ceil(ele);
    bai = floor(ele);
    if(ele != cim && ele != bai){
        printf("nao\n");
    }else{
        printf("sim\n");
    }
}