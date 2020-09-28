#include<stdio.h>
#include<string.h>

int vezes_caractere(char str[],char carac[],int tamStr){
    int vezes=0;

    for(int i=0;i<tamStr;i++){
        if(carac[0] == str[i]){
            vezes++;
        }
    }
    return vezes;
}

int main(void){
    
    char str[100],carac[1];
    
    scanf("%[^\n] ",str);
    scanf("%c",&carac[0]);
    int tamStr = strlen(str);
    int repete = vezes_caractere(str,carac,tamStr);
    printf("%d\n",repete);
    return 0;
}