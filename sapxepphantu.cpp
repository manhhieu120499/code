#include<stdio.h>

int main(){
    int array[100] = {0};
    int n;
    printf("nhap vao so phan tu mang: ");
    scanf("%d",&n);
    printf("nhap mang!\n");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            if(array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}