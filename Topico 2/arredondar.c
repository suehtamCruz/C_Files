#include<stdio.h>
#include<math.h>

int main(){
    char op;
    float nota;
    int s;
    scanf("%c%f",&op,&nota);
    switch(op){
        case 'r':
            s=round(nota);
            printf("%d\n",(int)s);
        break;
        
        case 'f':
            s=floor(nota);
            printf("%d\n",(int)s);
        break;
        
        case 'c':
            s=ceil(nota);
            printf("%d\n",(int)s);
        break;
    }
}