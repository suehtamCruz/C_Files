#include<stdio.h>
#include<string.h>

void imprime_substring(char str[] ,int tamStr , int posIni, int posFin){
    if(posFin>tamStr){
        for(int i=posIni;i<tamStr;i++){
            printf("%c",str[i]);
        }printf("\n");
    }else{
        for(int i=posIni;i<posFin;i++){
            printf("%c",str[i]);
        }printf("\n");
    }
}

int main(void){
    char str[100];
    scanf("%[^\n] ",str);
    int tamStr = strlen(str);

    int posIni,posFin;
    scanf("%d%d",&posIni,&posFin);
    imprime_substring(str,tamStr,posIni,posFin);
    return 0;
}