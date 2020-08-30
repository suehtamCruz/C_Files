#include<stdio.h>

int main(void){

    float jog1,value;
    char jog2;
    scanf("%f %c %f",&jog1,&jog2,&value);
    if(jog1==value){
        printf("primeiro\n");
    }else{
        switch(jog2){
        case 'm':
            if(value<jog1){
                printf("segundo\n");
            }else{
                printf("primeiro\n");
            }
        break;
        
        case 'M':
            if(value>jog1){
                printf("segundo\n");
            }else{
                printf("primeiro\n");
            }
        break;
    }
    }
    return 0;
}