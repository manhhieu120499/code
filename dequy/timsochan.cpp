#include<stdio.h>

int tsc(int array[], int n);

int main(){
    int array[100] = {0};
    int n;
    do
    {
        printf("nhap vao so phan tu mang (n > 0): ");
        scanf("%d",&n);
    } while (n <= 0);
    // nhap mang
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&array[i]);
    }
    //xu li
    printf("%d ",tsc(array,n));
    return 0;
}

int  tsc(int array[], int n) {
    if(n == (-1))
        return 0;
    if(array[n] % 2 == 0)
        return array[n];
    return tsc(array,n - 1);         
}