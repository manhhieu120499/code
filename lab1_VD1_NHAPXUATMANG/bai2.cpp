#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int n;
    int array[100] = {0};
    srand(time(NULL));
    printf("nhap vao n: ");
    scanf("%d",&n);

    //khoi tao ngau nhien n phan
    for(int i = 0 ; i < n ; i++) {
        array[i] = array[i - 1] + rand() % 20;
    }

    //xuatmang 
    for(int i = 0 ; i < n ; i++) {
        printf("%d\t",array[i]);
    }
    return 0;
}