#include<stdio.h>
int main(){
    int v[5],menor;
    for(int i=0;i<5;i++){
        scanf("%d",&v[i]);
    }
    for(int i=0;i<5;i++){
        if(i==0){
            menor=v[i];
        }else{
           v[i]<menor?menor=v[i]:0;
        }
    }
    printf("%d\n",menor);
}