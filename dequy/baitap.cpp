#include<stdio.h>

unsigned int abc(unsigned int n) {
    if( !n ) return (0);
    return ((n % 10) + abc(n / 10));

}

int main() {
    int n;
    scanf("%d",&n);
    unsigned k = abc(n);
    printf("%u",abc(n));
}
