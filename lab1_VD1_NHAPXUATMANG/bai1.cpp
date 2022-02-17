#include<stdio.h>

int main() {
    int array[100] = {0};
    int n;
    printf("nhap vao so phan tu mang: ");
    scanf("%d",&n);

    //nhap mang
    for(int i = 0 ; i < n ; i++) {
        printf("nhap phan tu mang thu %d: ",i + 1);
        scanf("%d",&array[i]);
    }

    //xuat mang
    for(int i = 0 ; i < n ; i++) {
        printf("%d\t",array[i]);
        if((i + 1) % 3 == 0) {
            printf("\n");
        }
    }
    return 0;
}