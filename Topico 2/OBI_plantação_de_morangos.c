#include<stdio.h>

int area (int n1,int n2){
    int area;
    area = n1* n2;
    return area;
}
int main(){
    
    int c1,l1,c2,l2;
    
    scanf("%d\n%d\n%d\n%d",&c1,&l1,&c2,&l2);
    
    if(area(c1,l1)>area(c2,l2)){
        printf("%d\n",area(c1,l1));
    }else{
        printf("%d\n",area(c2,l2));
    }
}