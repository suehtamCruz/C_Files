#include<stdio.h>

void atribuiTamanho(int v[], char tamanho[]){
    for(int i=0;i<3;i++){

       if( (v[i] >= v[0]) && (v[i] >= v[1]) && (v[i] >= v[2]) ){
           tamanho[i] = 'G';
       }
       else if((v[i] <= v[0]) && (v[i] <= v[1]) && (v[i] <= v[2])){
           tamanho[i] = 'P';
       }    
       else{
           tamanho[i] = 'M';
       }
    }
}

int main(void){
    int vet[3];
    char tamanhos[3];
    for(int i=0;i<3;i++){
        scanf("%d",&vet[i]);
    }
    atribuiTamanho(vet,tamanhos);
    for(int i=0;i<3;i++){
        if(i==2){
            printf("%c",tamanhos[i]);
        }else{
            printf("%c ",tamanhos[i]);
        }
    }printf("\n");
    return 0;
}