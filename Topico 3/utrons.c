#include<stdio.h>

int main(){
    
    int ult,vet,cont=0;
    scanf("%d%d",&ult,&vet);
    int v[vet];
    
    for(int i=0;i<vet;i++){
        scanf("%d",&v[i]);
    }
    for(int i=0;i<vet;i++){
        if(v[i]==ult){
            cont++;
        }
    }
    printf("%d\n",cont);
}