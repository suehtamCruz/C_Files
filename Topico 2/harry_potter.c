#include<stdio.h>

int ace(char a,char b,char c,char d){
    int cont = 0;
    if(a=='d'){
        cont++;
    }
    if(b=='a'){
        cont++;
    }
    if(c=='c'){
        cont++;
    }
    if(d=='d'){
        cont++;
    }
    return cont;
}
int main(){
    char a,b,c,d;
    scanf("%c %c %c %c",&a,&b,&c,&d);
    int ac=ace(a,b,c,d);
    {ac == 4 ?printf("Super Fa\n"):ac==3?printf("Fa\n"):
     ac==2?printf("Interessado no assunto"):
     ac==1?printf("Ja ouviu falar\n"):printf("Nunca assistiu\n");
    }
}