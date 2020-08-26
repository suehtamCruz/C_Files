#include<stdio.h>

int main(){
    int id;
    char nome[100];
    scanf("%s%d",nome,&id);
    if(id<12){
        printf("%s eh crianca\n",nome);
    }
    else if(id>=12 && id<18){
        printf("%s eh jovem\n",nome);
    }
    else if(id>=18 && id<65){
        printf("%s eh adulto\n",nome);
    }
    else if(id>=65 && id<1000){
        printf("%s eh idoso\n",nome);
    }
    else if(id>=1000){
        printf("%s eh mumia\n",nome);
    }
}