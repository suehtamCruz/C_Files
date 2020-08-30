#include<stdio.h>

int main(void){
    char esc;
    int n1=0,n2=0;
    scanf("%c",&esc);
    scanf("%d%d",&n1,&n2);
    
    switch(esc){
        case 'p':
            if((n1+n2)==0){
                printf("Venceu\n");
            }else{
            (n1+n2)%2==0?printf("Venceu\n"):printf("Perdeu\n");
            }
        break;
        case 'i':
            if((n1+n2)==0){
                printf("Perdeu\n");
            }else{
            (n1+n2)%2!=0?printf("Venceu\n"):printf("Perdeu\n");
            }
        break;
    }
    return 0;
}