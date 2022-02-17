#include<stdio.h>
#include<math.h>

int songuyento(int k);
int sochinhphuong(int k);
int sodoixung(int k);
int soboi3(int k);

int main() {
    int n;
    int array[100] = {0};
    do
    {
        printf("nhap vao so phan tu cua mang: ");
        scanf("%d",&n);
        if(n <= 0) {
            printf("du lieu nhap khong hop le. nhap lai so phan tu mang.");
        }
    } while (n <= 0);

    //nhap mang
    for(int i = 0 ; i < n ; i++) {
        printf("nhap vao phan tu mang.\n");
        scanf("%d",&array[i]);
        if(array[i] < 0) {
            printf("phan tu phai la so nguyen khong am. nhap lai phan tu: ");
            scanf("%d",&array[i]);
        }
    }
    
    //xuat cac so nguyen to co trong day A
    printf("cac so nguyen to cua day A: ");
    for(int i = 0 ; i < n ; i++) {
        if(songuyento(array[i]) == 1) {
            printf("%d ",array[i]);
        }
    }
    printf("\n");

    //xuat so chinh phuong cua day va tinh tong cua chung
    int sum = 0;
    for(int i = 0 ; i < n ; i++) {
        if(sochinhphuong(array[i]) == 1) {
            printf("%d ",array[i]);
            sum += array[i];
        }
    }
    printf("tong cua so chinh phuong (sum) = %d\n",sum);

    // xuat ca so doi xung va dem so luong cua chung
    /*
       chua hoan thanh duoc chuong trinh nay
    */
    
    // xuat cac so boi 3 va tinh trung binh cong cua chung
    float average = 0.0;
    int dem = 0;
    int Sum = 0;
    for(int i = 0 ; i < n ; i++) {
        if(soboi3(array[i]) == 1) {
            printf("%d ",array[i]);
            Sum += array[i];
            dem++;
        }
    }
    printf("\naverage = %.1f",((1.0 * Sum) / dem));

    return 0;
}

int songuyento(int k) {
    if(k <= 1) {
        return 0;
    }else {
        for(int i = 2 ; i <= sqrt(k) ; i++) {
            if(k % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}

int sochinhphuong(int k) {
    int t = sqrt(k);
    if(sqrt(k) == t) {
        return 1;
    }
    return 0;
}

int sodoixung(int k) {

    return 1;
}

int soboi3(int k) {
    int sum = 0;
    int a;
    while(k > 0) {
        a = k % 10;
        k = k / 10;
        sum += a;
    }
    if(sum % 3 == 0) {
        return 1;
    }
    return 0;
}