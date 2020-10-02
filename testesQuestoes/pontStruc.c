#include<stdio.h>

struct data{
    int hora;
    int minuto;
    int segundo;
};


int main(void){
    struct data hoje,*pHoje;
    pHoje = &hoje;

    pHoje -> hora = 20;
    (*pHoje).minuto= 39;
    pHoje -> segundo = 22;

    int *pHora = &hoje.minuto;
    printf("%d\n",*pHora);
    printf("%d : %d : %d",hoje.hora , hoje.minuto , hoje.segundo);
    return 0;
}