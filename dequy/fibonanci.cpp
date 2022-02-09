#include<stdio.h>

int fibo(int n);

int main() {
    int n;
    printf("nhap vao vi tri fibo can tim: ");
    scanf("%d",&n);
    printf("gia tri fibo = %d",fibo(n));
    return 0;
}

int fibo(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}