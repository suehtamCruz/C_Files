#include<stdio.h>
int pre(char esc,int f){
    int p=0;
    switch (esc){
        case 'b':
            p=(((f*20)-80)/10);
        break;
        case 'c':
            p=(((f*18)-80)/10);
        break;
    }
    return p;
}
int main(){
    int f;
    char esc;  
    scanf("%c%d",&esc,&f);
    if(pre(esc,f)<150){
        printf("Fraco, nem passou\n");
    }
    else if(pre(esc,f)>=150 && pre(esc,f)<180){
        printf("Perfeito\n");
    }
    else if(pre(esc,f)>=180&&pre(esc,f)<210){
        printf("Satisfeito\n");
    }else{
        printf("Muito forte, bola fora\n");
    }
}