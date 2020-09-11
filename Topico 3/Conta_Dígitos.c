#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(void){
    int num,valor;
    scanf("%d%d",&num,&valor);

    char valString[100];
    itoa(valor,valString,10);

    int tam = strlen(valString);
    printf("%s",valString[1]);
    
    return 0;
}