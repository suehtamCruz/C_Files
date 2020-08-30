#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    float bask,delt,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    delt=pow(b,2)-(4*a*c);

    x1=((b*-1)+sqrt(delt))/(2*a);;
    x2=((b*-1)-sqrt(delt))/(2*a);
    
    if(delt>0){
        printf("%.2f\n%.2f\n",x1,x2);
    }else if(delt<0){
        printf("nao ha raiz real\n");
    }else{
        printf("%.2f\n",x1);
    }
}