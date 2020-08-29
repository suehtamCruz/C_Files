 #include<stdio.h>
    
   int main(){
        //dorme
        int hora,min,seg;
        //acorda
        int ha,ma,sa;
        scanf("%d%d%d\n%d%d%d",&hora,&min,&seg,&ha,&ma,&sa);
        
        int hs= ha - hora;
        int ms= ma - min;
        int ss= sa - seg;
        if(ss<0){
            ms--;
           ss+=60;
        }
        if(ms<0){
            hs--;
            ms+=60;
        }
        if(hs<0){
            hs+=24;
        }
        printf("%02d %02d %02d\n",hs,ms,ss);
    }