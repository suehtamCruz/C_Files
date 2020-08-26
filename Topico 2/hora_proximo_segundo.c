#include<stdio.h>

int main(){
    int h,m,s;
    
    scanf("%d%d%d",&h,&m,&s);
    if(s<59){
        s++;
    }else{
    if(s==59){
        s=0;
        m++;
    }
    if(m==60){
        s=0;
        m=0;
        h++;
        }
    if(h==24){
        h=0;
        m=0;
        s=0;
    }}
    printf("%02d %02d %02d\n",h,m,s);
    
}