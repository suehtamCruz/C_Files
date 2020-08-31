#include<stdio.h>
int main(){
    int tam,reb=0,sold=0;
    scanf("%d",&tam);
    int v[tam];
    for(int i=0;i<tam;i++){
        scanf("%d",&v[i]);
    }
    for(int i=0;i<tam;i++){
        if(v[i]%2==0){
            reb+=v[i];
        }else{
            sold+=v[i];
        }
    }
    if(reb==sold){
        printf("empate\n");
    }else{
        reb>sold?printf("rebeldes\n"):printf("soldados\n");
    }
}