#include<stdio.h>

int soldados_sem_medico(int soldados[], int qtd_sold){
    int sold=0; 
    for(int i = 0 ; i < qtd_sold ; i++){
        if(i==0){
            if(soldados[i] == 0 && soldados[i+1] == 0){
                sold++;
            }
        }
        else if(i == (qtd_sold-1)){
            if(soldados[i] == 0 && soldados[i-1] == 0){
                sold++;
            }
        }
        else{

            if(soldados[i] == 0 && (soldados[i-1] == 0 && soldados[i+1] == 0)) {
                sold++;
            }
        }

    }
    return sold;
}

void main(){

    int tam_vetor;
    scanf("%d",&tam_vetor);
    int soldados[tam_vetor];
    for(int i = 0 ; i < tam_vetor ; i++){
        scanf("%d",&soldados[i]);
    }
    int semMedico = soldados_sem_medico(soldados,tam_vetor);
    printf("%d\n",semMedico);
}