#include<stdio.h>
int main(){
    int c,aux,pas=0;
    scanf("%d",&c);
    do{
        scanf("%d",&aux);
        pas+=aux;
        if(pas==0){
            printf("vazio\n");
        }else{
            if(pas<c){
                printf("ainda cabe\n");
            }if(pas>=c&&pas<(c*2)){
                printf("lotado\n");
            }
        }

    }while(pas<=(c*2));
    printf("hora de partir\n");
}