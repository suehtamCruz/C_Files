#include<stdio.h>

int Winner(char j1,char j2){
    int jog;
    j1=='P'&&j2=='R'?jog=1:0;
    j1=='R'&&j2=='S'?jog=1:0;
    j1=='S'&&j2=='P'?jog=1:0;

    j2=='P'&&j1=='R'?jog=2:0;
    j2=='R'&&j1=='S'?jog=2:0;
    j2=='S'&&j1=='P'?jog=2:0;
    return jog;
}

int main(void){ 
    
    char jog1,jog2;
    scanf("%c %c",&jog1,&jog2);
    if(jog1==jog2){
        printf("empate\n");

    }else{
        int win = Winner(jog1,jog2);
        printf("jog%d\n",win);
    }
    return 0;
}