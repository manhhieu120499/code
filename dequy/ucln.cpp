#include<stdio.h>

int uclndequy(int a, int b);

int main(){
    int a, b;
    do
    {
        printf("nhap vao so nguyen duong a: ");
        scanf("%d",&a);
        printf("nhap vao so nguyen duong b: ");
        scanf("%d",&b);
    } while (a < 0 || b < 0);
    printf("UCLN(%d,%d) = %d",a,b,uclndequy(a,b));
    return 0;
}

int uclndequy(int a, int b) {
    if(a == 0 || b == 0)
    {
        return 0;
    }
    if(a == b)
    {
        return (a);
    }else
    {
        if(a > b)
        {
            return (uclndequy(a - b,b));
        }else
        {
            return (uclndequy(a,b - a));
        }
    }
}
