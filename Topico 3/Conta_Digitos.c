#include<stdio.h>
#include<string.h>

int main(void){
    int valor;
    
    char num[1];
    scanf("%c ",&num[0]);
    scanf("%d",&valor);

    char valString[100];
    //transformando o numero que foi dado para uma string para poder comparar o numero que vai estar presente com cada posição da string
    sprintf(valString,"%d",valor); 
    //quantidade da caracteres do numero passado    
    int tam = strlen(valString);
    
    int cont=0;
    for(int i=0;i<tam;i++){
        if(valString[i] == num[0]){
            cont++;
        }    
    }
    
    printf("%d\n",cont);

    return 0;
}