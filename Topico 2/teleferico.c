#include<stdio.h>
int viagens(int cap,int alu){
    int cont=0;
    if(cap>alu){
        return cont+1;
    }else{
    while(alu>=cap){
        cont++;
        alu-=cap;
    }
}
    return cont+1;
}
int main(){
    int al,cap;
    scanf("%d%d",&cap,&al);
    printf("%d\n",viagens(cap,al));
}