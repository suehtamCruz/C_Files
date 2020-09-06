#include<stdio.h>

int main(void){
    int tamUnha,cont=0;
    scanf("%d",&tamUnha);
    int unhas[tamUnha];
    
    for(int i=0;i<tamUnha;i++){
        scanf("%d",&unhas[i]);
    }    
    for(int i=0;i<1;i++){
        for(int j=1;j<tamUnha;j++){
            if(unhas[i]==unhas[j]){
                cont++;
            }
        }
    }
    if(cont==(tamUnha-1)){
        printf("%d\n",unhas[0]);
    }else{
        for(int i=0;i<tamUnha;i++){
            printf("%d",unhas[i]);
        }printf("\n");
    }
    return 0;

}