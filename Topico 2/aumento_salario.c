#include<stdio.h>

int main(){
    float sal=0;
    scanf("%f",&sal);
    if(sal<=1000){
        printf("%.2f\n",sal+=(sal*20)/100);
    }else{
        if(sal>1000&&sal<=1500){
            printf("%.2f\n",sal+=(sal*15)/100);
        }
        else if(sal>1500&&sal<=2000){
            printf("%.2f\n",sal+=(sal*10)/100);
        }
        else if(sal>2000){
            printf("%.2f\n",sal+=(sal*5)/100);
        }
    }
}