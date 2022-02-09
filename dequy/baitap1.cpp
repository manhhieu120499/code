#include<stdio.h>

int t(int n);
int t1(int n);

int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n",t(n));
    printf("%d",t1(n));
    return 0;
}
int t(int n) {
    if(n == 0) {
        return 0;
    } else {
        return (n % 10 + t(n / 10));
    }
}

int t1(int n) {
    int sum = 0;
    while(n > 0) {
        sum += (n % 10);
        n = n / 10;
    }
    return sum;
}