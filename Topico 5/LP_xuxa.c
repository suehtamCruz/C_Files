#include<stdio.h>
#include<string.h>

int main(){
    
    char frase[100];
    scanf("%[^\n]",frase);

    int tam = strlen(frase);

    for(int i =(tam-1);i>=0;i--){
        printf("%c",frase[i]);
    }
    printf("\n");
    return 0;
}