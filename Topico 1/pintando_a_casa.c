#include<stdio.h>
#include<math.h>
int main(){
    
    float area,la,lb,lc,p;
    scanf("%f\n%f\n%f",&la,&lb,&lc);
   
    p = (la+lb+lc)/2;
    area = sqrt((p*(p-la)*(p-lb)*(p-lc)));
   
    printf("%.2f\n",area);
}

