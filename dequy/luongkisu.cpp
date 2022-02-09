// #include<stdio.h>

// float tinhLuong(int n);

// int main() {
//     int n;
//     printf("nhap vao so thang lam viec: ");
//     scanf("%d",&n);
//     printf("luong thang thu %d cua ki su = %.3f",n,tinhLuong(n));
//     return 0;
// }

// float tinhLuong(int n) {
//     float t = 0.0;
//     if(n == 1) {
//         t = 3000;
//     }else {
//         t = 1.01 * tinhLuong(n - 1);
//     }
//     return t;
// }

#include<stdio.h>

int sum(int n);
unsigned int sume(int n);

int main() {
    int n;
    printf("nhap vao so nguyen duong n: ");
    scanf("%d",&n);
    printf("tong cac chu so cua so nguyen duong n = %d\n",sum(n));
    printf("tong cac chu so cua so nguyen duong n = %u",sume(n));
    return 0;
}

int sum(int n) {
    int S = 0;
    if(n == 0) {
        return 0;
    }else {
        while(n > 0) {
            S += n % 10;
            n = n / 10;
        }
    }
    return S;
}
unsigned int sume(int n) {
    if(!n) return 0;
    return (n % 10) + sume(n / 10);
}