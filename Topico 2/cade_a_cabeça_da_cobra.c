#include<stdio.h>
int main(){
    int tam,col,lin,seg;
    char dir;
   
    scanf("%d %d %d %c %d",&tam,&col,&lin,&dir,&seg);
   
    switch(dir){
        case 'R':
            col+=seg;
            if(col>(tam-1)){
                printf("%d %d\n",col%tam,lin);
            }else{
            printf("%d %d\n",col,lin);}
        break;
      
        case 'U':
            lin-=seg;
                if(lin<0){
                    lin=(lin%tam)+(tam-1);
                    printf("%d %d\n",col,lin);
                }
                else{
                    printf("%d %d\n",col,lin);
                }
        break;
       
        case 'D':
            lin+=seg;
            if(lin>(tam-1)){
                lin%=tam;
                printf("%d %d\n",col,lin);
            }else{
                printf("%d %d\n",col,lin);
            }
        break;
       
        case 'L':
            col-=seg;
            if(col<0){
                col=(col%tam)+(tam-1);
                printf("%d %d\n",col,lin);
            }else{
                printf("%d %d\n",col,lin);
            }
        break;
    }
}