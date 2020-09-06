#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int v[t];
    for(int i=0;i<t;i++){
        scanf("%d",&v[i]);
    }printf("[");
    for(int i=t-1;i>=0;i--){
        printf(" %d",v[i]);
    }printf(" ]\n");
}