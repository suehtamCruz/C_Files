 #include<stdio.h>
    int ts();
    int trab();
    
    int main(){
        
    int dia,hora,min;
        
    scanf("%d\n%d\n%d",&dia,&hora,&min);
            
    if(dia == 1){
        printf("NAO\n");   
    }else{
        if (dia == 7 && ts(hora) == 1){
            printf("SIM\n");
        }
        if(dia == 7 && ts(hora) == 0){
            printf("NAO\n");
        }
        if(dia>=2 && dia<6){
            trab(hora) == 1 ? printf("SIM\n"):printf("NAO\n");
        }
    }
}
    int ts(int h){
        if(h == 8 || h == 9 || h == 10 || h == 11){
            return 1;
        }
        else{
            return 0;
        }
    }
    int trab (int h){
        if(h == 8 || h == 9 || h == 10 || h == 11 || h == 14 || h == 15 || h == 16 || h == 17){
            return 1;
        }else{
        return 0;
        }
   }