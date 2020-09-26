#include<stdio.h>

void main(){
    int v[4];
    for(int i=0;i<4;i++){
        scanf("%d",&v[i]);
    }
    printf("\n");
    
    int *pont = v;
    
    printf("\n");

    for(int i=0;i<4;i++){
        printf("%d\t",*pont);
        pont++;
    }
}