#include<stdio.h>

int main(void){

    FILE * arq;

    arq = fopen("teste.txt","w");
    fprintf(arq,"testando arquivos em C");
    fprintf(arq,"\n2");
    fprintf(arq,"\n3");
        

    fclose(arq);
    return 0;
}