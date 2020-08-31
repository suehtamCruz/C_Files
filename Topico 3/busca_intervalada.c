#include<stdio.h>

//função que conta quantos valores há entre limite inferior e superior
int vetLength(int ti,int tf){
    int cont=0;
    for(int i= ti ; i<=tf ; i++){
        cont++;
    }
    return cont;
}

int main(){
    int tam;
    scanf("%d",&tam);
    int v[tam],cont=0;
    
    int limInf, limSup;
    scanf("%d%d",&limInf,&limSup);
    
    
    int contVetComp = vetLength(limInf,limSup);
    int valEntre[contVetComp];
    //contador pra determinar os valores da intersessao dos numeros de comparação
    int tamVetComp = 0;
    
    //laço determina o vetor de comparação entre limite inferior e limite superior
    for(int i=limInf;i<=limSup;i++){
        
        valEntre[tamVetComp]=i;
        tamVetComp++;
    }   
    
    for(int i=0;i<tam;i++){
        scanf("%d",&v[i]);
        //aqui onde compara o valor inserido com o vetor de comparação
        for(int j=0; j<contVetComp ; j++){
            if(v[i]==valEntre[j]){
                cont++;
            };
        };
           
    };
    //retorna quantas vezes foi verdadeira a condição.
    printf("%d\n",cont);
}
