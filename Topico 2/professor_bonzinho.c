#include<stdio.h>
#include<math.h>
float soma(float v[],float trab){
    float menor;
    float soma,total;
    for(int i=0;i<3;i++){
        soma += v[i]; 
        if(v[i]==0){
            menor = v[i];
        }
        if(v[i]<menor){
            menor=v[i];
        }
    }
    total = (soma - menor) + trab;
    return total;
}

int main(void){
    float notas[3];
    float trab,media;
    
    for(int i=0;i<3;i++){
        scanf("%f",&notas[i]);
    }
    scanf("%f",&trab);
    media = soma(notas,trab)/3;
    media>=7 ? printf("Aprovado com %0.1f\n",media) : printf("Final com %0.1f\n",floor(media));
    return 0;
}