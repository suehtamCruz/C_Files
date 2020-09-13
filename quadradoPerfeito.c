#include <stdio.h>
#include <math.h>

int main(){
    int ni,nf;
    scanf("%d%d",&ni,&nf);
    if(ni > nf)
        printf("invalido");
    for(int i = ni; i<=nf;i++){
        if(i==nf-1){
            if(sqrt(i) == floor( sqrt(i) )){
                printf("%d",i);
            }
        }else{
            if(sqrt(i) == floor( sqrt(i) )){
                printf("%d ",i);
            }     
        }
    }
    printf("\n");
    return 0;
}
