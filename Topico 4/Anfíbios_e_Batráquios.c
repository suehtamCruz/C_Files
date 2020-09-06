#include<stdio.h>
#include<string.h>
//questao com teste incorreto
int main(void){
    
    char v1[100],v2[100];
    scanf("%[^\n] ",v1);
    scanf("%[^\n]",v2);

    int tam1,tam2;
    tam1 = strlen(v1);
    tam2 = strlen(v2);
    int cont=0;
    for(int i=0;i<tam1;i++){
        for(int j=0;j<tam2;j++){
            if(v1[i]==v2[j]){
                cont++;
                j=tam2;
            }
        }
    }
    cont==tam1 ? printf("sim\n") : printf("nao\n");
    return 0;
}