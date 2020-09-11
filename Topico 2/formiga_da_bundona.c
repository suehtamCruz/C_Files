#include <stdio.h> 
    
int main(){
          
    int horainicial,minutoinicial,distancia,posicao;
    char sentido;
        
    scanf("%d %d %c %d", &horainicial, &minutoinicial, &sentido, &distancia);
    posicao = (horainicial * 6) + (minutoinicial/10);
        
    if(sentido == 'H'){
    posicao = (posicao + distancia) % 72;
        
    }else{ 
        posicao = (posicao - distancia) % 72;
        if(posicao <0){
            posicao = posicao + 72;
        }
    }
    horainicial = posicao / 6;
    minutoinicial = (posicao % 6) * 10;
    printf("%02d %02d\n", horainicial, minutoinicial);
        
}