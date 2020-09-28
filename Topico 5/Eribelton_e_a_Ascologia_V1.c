#include<stdio.h>
#include<string.h>

int soma_asc(char nome[],int tamNome){
    int soma=0;
    int asc[tamNome];
    for(int i=0;i<tamNome;i++){
        asc[i] = nome[i];
    }
    for(int i=0;i<tamNome;i++){
        soma+=asc[i];
    }
    return soma;
}


int main(void){
    char nome[20];

    scanf("%[^\n] ",nome);
    int tamNome = strlen(nome);
    int soma = soma_asc(nome,tamNome);
    printf("%d\n" , (soma%50));
    return 0;
}
