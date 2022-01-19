#include<stdio.h>
#include<math.h>

void nhapMang(int array[], int size);
int ktscp(int n);
void xuatSoChinhPhuong(int array[], int array1[], int size);
void xscp(int array[], int size);

int main(){
    int n;
    int array[100] = {0};
    int array1[100] = {0};
    do
    {
        printf("nhap vao so nguyen duong n: ");
        scanf("%d",&n);
    } while (n < 0);
    nhapMang(array,n);
    xuatSoChinhPhuong(array,array1,n);
    // xscp(array,n);

    // if(ktscp(n) == 1)
    // {
    //     printf("%d la so chinh phuong",n);
    // }else
    // {
    //     printf("%d khong la so chinh phuong",n);
    // }


    return 0;
}

void nhapMang(int array[], int size) {
    printf("nhap mang!\n");
    for(int i = 0 ; i < size ; i++)
    {
        scanf("%d",&array[i]);
    }
}

int ktscp(int n) {
    int k = sqrt(n);
    if(sqrt(n) == k)
    {
        return 1;
    }
    return 0;
}

void xuatSoChinhPhuong(int array[], int array1[], int size) {
    int dem = 0;
    int i = 0, j = 0;
    for(int i = 0 ; i < size ; i++)
    {
        if(ktscp(array[i]) == 1)
        {
           array1[dem] = array[i]; 
           dem++;
        }
    }

    for(int i = 0 ; i < dem ; i++)
    {
        for(int j = i + 1 ; j < dem ; j++)
        {
            if(array1[i] > array1[j])
            {
                int temp = array1[i];
                array1[i] = array1[j];
                array1[j] = temp;
            }
        }
    }

    for(int i = 0 ; i < dem ; i++) {
        printf("%d ",array1[i]);
    }
}

void xscp(int array[], int size) {
    for(int i = 0 ; i < size ; i++)
    {
        if(ktscp(array[i]) == 1)
        {
           printf("%d ",array[i]);
        }
    }
}

