#include<stdio.h>

int main(){
    
    float n1,n2,nf;
    scanf("%f%f%f",&n1,&n2,&nf);
    if(((n1+n2)/2) >= 7){
        printf("aprovado\n");
    }else{
        if(((n1+n2)/2) < 4 ){
            printf("reprovado\n");
        }
        else if(((((n1+n2)/2)+nf)/2) >= 5){
            printf("aprovado na final\n");
        }
        else{
            printf("reprovado na final\n");
        }
    }
}