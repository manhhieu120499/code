#include<stdio.h>

int main() {
    int array[100] = {0};
    int a; 
    int b;
    printf("nhap vao a: ");
    scanf("%d",&a);
    printf("nhap vao b: ");
    scanf("%d",&b);
    // nhap mang
    for(int i = 0 ; i <= (b - a) ; i++) {
        printf("nhap vao day n: ");
        scanf("%d",&array[i]);
    }

    //xuat mang 
    for(int i = (b - a) ; i >= 0 ; i--) {
        printf("%d\t",array[i]);
    }
    return 0;

}
