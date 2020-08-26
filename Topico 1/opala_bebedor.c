#include<stdio.h>

int main(){
    
    int velocidade, consumo, tempo;
    float desempenho, dist;
    
    scanf("%d %d %d", &velocidade, &tempo, &consumo);
    
    dist = (velocidade * tempo) / 60;
    desempenho = dist / consumo;
    
    printf("%.2f\n", desempenho);
}