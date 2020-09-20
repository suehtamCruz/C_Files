#include<stdio.h>
#include<string.h>

int find(char s[], char label[], int tamS, int tamL) {
    int resp ;
    int contEqual = 0;
    for(int i=0;i<tamS;i++){
        if(s[i] == label[0]){
            resp = i;
            contEqual++;
            for(int j=1;j<tamL;j++){
                i++;
                if(label[j]==s[i]){
                  contEqual++;
                }else{
                    j=tamL;
                    contEqual=0;
                }
            }
        }
    }
    if(contEqual==tamL){
        return resp;
    }else{
        return -1;
    }
}


int main(void){
    char s[100];
    scanf("%[^\n] ",s);
    
    int tam = strlen(s);
    char label[50];
    scanf("%[^\n]",label);
    int tamL = strlen(label);
    int isEqual = find(s,label,tam,tamL);
    printf("%d\n",isEqual);
    return 0;
}