#include<stdio.h>
int main(){
    int v[4],maior=0,cont=0;
    for(int i=0;i<4;i++){
        scanf("%d",&v[i]);
            if(v[i]>maior){
                maior=v[i];
            }
        }
    printf("%d\n",maior);
}