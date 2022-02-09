#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("nhap vao so nguyen duong n: ");
    scanf("%d",&n);
    printf("sum = %d",sum(n));
    return 0;
}

int sum(int n) {
    if(n < 0)
       return 0;
    if(n == 1)
       return (n);   
    return n + sum(n - 1);
}