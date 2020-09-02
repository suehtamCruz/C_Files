#include<stdio.h>

double media(double vet[],int tam){
    double soma=0.0;
    double media=0.0;
    for(int i=0;i<tam;i++){
        soma+=vet[i];
    }
    media = soma/tam;
    return media;
}   

int main(void){
    int tam;
    scanf("%d",&tam);
    double soldiers[tam];
    char tamanhos[tam];
    
    for(int i=0;i<tam;i++){
        scanf("%lf",&soldiers[i]);
    }
    if(tam == 1){
        printf("M\n");
    }else{
        
        double mediaSold = media(soldiers,tam);
        printf("%0.2lf\n",mediaSold);
        
        for(int i=0;i<tam;i++){
            if(soldiers[i] == mediaSold){
                tamanhos[i] = 'M';
            }
            else if(soldiers[i] > mediaSold){
                tamanhos[i] = 'G';
            }
            else if(soldiers[i] < mediaSold){
                tamanhos[i] = 'P';
                
            }
    }
    for(int i =0;i<tam;i++){
       if(i== tam-1){
           printf("%c\n",tamanhos[i]);
       }else{
           printf("%c ",tamanhos[i]);
       }
    }
    }
   
    return 0;
}