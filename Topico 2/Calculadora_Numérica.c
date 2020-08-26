#include<stdio.h>

int main(){
    int n1,n2;
    char op;
    
    scanf("%d%d\n%c",&n1,&n2,&op);
    
    switch(op){
        case '+':
            printf("%d\n",(n1+n2));
        break;
        case '-':
            printf("%d\n",(n1-n2));
        break;
        case '*':
            printf("%d\n",(n1*n2));
        break;
        case '/':
            if(n1 == 0 ||n2==0){
                printf("nao\n");
            }else{
                printf("%d\n",(n1/n2));
            }
        break;
        default:
            return 0;
        break;
    }
}