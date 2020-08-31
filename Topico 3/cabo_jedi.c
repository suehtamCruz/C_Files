#include<stdio.h>
int main(){
    int t,jedi=0,sith=0;
    scanf("%d",&t);
    int cont;
    cont=(t/2)-1;
    int v[t];
    for(int i=0;i<t;i++){
        scanf("%d",&v[i]);
    }
    for(int j=cont;j>=0;j--){
        jedi+=v[j];
    }
    for(int k=(cont+1);k<=(t-1);k++){
        sith+=v[k];
    }
    if(jedi==sith){
        printf("Empate\n");
    }else{
        jedi>sith?printf("Jedi\n"):printf("Sith\n");
}
}