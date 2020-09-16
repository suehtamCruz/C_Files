#include<stdio.h>

// 0 ,1 ,1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 , 89....
// 1  2  3   4   5   6   7    8    9   10   11   12 

int fibonacci(int n){
    int value;
    if( n == 2 || n == 3){
        value = 1;
    }else{
        value = fibonacci(n-1) + fibonacci(n-2);
    }
    return value;
}
int main(void){
    int pos;
    scanf("%d",&pos);
    int fib = fibonacci(pos);
    printf("%d",fib);
    return 0;
}