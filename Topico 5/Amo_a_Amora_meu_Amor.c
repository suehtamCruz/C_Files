#include<stdio.h>
#include<string.h>

int vezes_substring(char str[], char sub[], int tamStr, int tamSub){
    int contIgual=0,aux;
    int contVezesSub=0;
    for(int i=0;i<tamStr;i++){
        if(sub[0] == str[i]){
            aux=i;
            aux++;
            contIgual++;
            for(int j=1;j<tamSub;j++){
                if(sub[j]==str[aux]){
                    contIgual++;
                    aux++;
                }
            }
            if(contIgual == tamSub){
                contVezesSub++;
            }
        }
        contIgual=0;
    }
    return contVezesSub;
}   

int main(void){
    char str[100];
    char subsrt[20];

    scanf("%[^\n] ",str);
    scanf("%[^\n]",subsrt);
    int tamStr = strlen(str);
    int tamSub = strlen(subsrt);
    int vezesIgual = vezes_substring(str,subsrt,tamStr,tamSub);
    printf("%d\n",vezesIgual);
    return 0;
}