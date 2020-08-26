#include<stdio.h>

int somaTodos(int vet[]) {
    int soma = 0;
    for(int i = 0; i < 4; i++) {
        soma += vet[i];
    }
    return soma;
}

int main() {
    int n[4];
    scanf("%d %d %d %d", &n[0],&n[1],&n[2],&n[3]);
    
    if(n[0] == 0 && n[0] == n[1] && n[1] == n[2] && n[2] == n[3] ) {
        printf("nenhum\n");
    } else {
        int modSoma = somaTodos(n);
        printf("jog%d\n", modSoma % 4 == 0 ? 4 : modSoma);
    }
}