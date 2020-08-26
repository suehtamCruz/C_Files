#include<stdio.h>
int main(){
    int tot,av,dis;
    scanf("%d%d%d",&tot,&dis,&av);
    if(dis==av){
        printf("0\n"); 
    }else{
        av>dis ? printf("%d\n",((tot-av)+dis)):printf("%d\n",(dis-av));
    }
}