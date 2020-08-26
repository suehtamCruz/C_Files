#include<stdio.h>

int main(){
    
    int cesta,banana,goiaba,manga,soma,cont=0;

    scanf("%d\n %d\n %d\n %d\n", &cesta,&banana,&manga,&goiaba);
    
    soma = banana+manga+goiaba;
    if(soma==cesta){
        cont++;
        printf("%d\n",cont);
    }else{
    do{
        soma= soma - cesta;
        cont++;
    }while(soma >= cesta);
        printf("%d\n",cont+1);
    }    
}