#include<stdio.h>

void orgazina(int v[]){
    int aux;
    for(int i=0;i<2;i++){
        for(int j=1;j<3;j++){
            if(v[i]>v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main(void){
    int num[3];
    for(int i=0;i<3;i++){
        scanf("%d",&num[i]);
    }
    orgazina(num);
    printf("%d\n",num[1]);
    return 0;
}