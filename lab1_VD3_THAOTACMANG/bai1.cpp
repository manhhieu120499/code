#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void input(int array[], int &n);
void output(int array[], int &n);
int max(int array[], int &n);
int min(int array[], int &n);
int search(int array[], int &n, int x);
void sort(int array[], int &n);

int main() {
    int n;
    int array[100] = {0};
    srand(time(NULL));
    int luachon = 0;
    printf("nhap vao so phan tu mang: ");
    scanf("%d",&n);

    do
    {
        printf("------MENU------\n");
        printf("1. tao day so.\n2. hien thi day so.\n3. tim max.\n4. tim min.\n5. tim phan tu x.\n6. bo sung phan tu .\n7. chen phan tu vao vi tri k.\n8. xoa phan tu thu k.\n9. sap xep day so.\n10. thoat\n");

        printf("nhao vao lua chon cua ban: ");
        scanf("%d",&luachon);

        switch (luachon)
        {
        case 1: {
            printf("khoi tao mang\n");
            //khoi tao ngau nhien n phan tu cua mang
            input(array,n);
            break;
        }
        case 2: {
            printf("xuat mang!\n");
            //xuat mang A
            output(array,n);
            break;
        }
        case 3: {
            int Max = max(array,n);
            printf("tim max!\n");
            //tim max
            printf("Max = %d\n",Max);
            break;
        } 

        case 4: {
            printf("tim min!\n");
            //tim min
            printf("Min = %d\n",min(array,n));
            break;
        }

        case 5: {
            //tim vi tri x trong mang
            int x;
            printf("nhap vao vi tri x can tim: ");
            scanf("%d",&x);
            printf("vi tri x can tim trong mang la: %d\n",search(array,n,x));
            break;
        }

        case 9: {
            //sap xep day so 
            sort(array,n);
        }
        
        default: {
            if(luachon == 10) {
                printf("thoat khoi menu!\n");
            }
            break;
        }
        }
    } while (luachon != 10);
    
}

void input(int array[], int &n) {
    for(int i = 0; i < n ; i++) {
        array[i] = array[i - 1] + rand() % 20;
    }
}

void output(int array[], int &n) {
    for(int i = 0 ; i < n ; i++) {
        printf("array[%d] = %d\n",i + 1,array[i]);
    }
}

int max(int array[], int &n) {
    int maxValue = array[0];
    for(int i = 0 ; i < n ; i++) {
        if(maxValue < array[i]) {
             maxValue = array[i];
        }
    }
    return maxValue;
}

int min(int array[], int &n) {
    int minValue = array[0];
    for(int i = 0 ; i < n ; i++) {
        if(minValue > array[i]) {
             minValue = array[i];
        }
    }
    return minValue;
}

int search(int array[], int &n, int x) {
    for(int i = 0 ; i < n ; i++) {
        if(array[i] == x) {
            return i;
        }
    }
    return (-1);
}

void sort(int array[], int &n) {
    for(int i = 0 ; i < n ; i++) {
        for(int j = i + 1 ; j < n ; j++) {
            if(array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int i = 0 ; i < n ; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
}
