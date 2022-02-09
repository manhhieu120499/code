// #include<stdio.h>
// #include<string.h>

// void xuatNguoc(char S[]) {
//     int L = strlen(S);
//     if(L > 1) xuatNguoc(S + 1);
//     if(L) putchar(*S);
// }

// int main() {
//     char *S = "QWERT";
//     xuatNguoc(S);
//     return 0;
// }

// #include<stdio.h>

// void chuyennhiphan(int n) {
//     if(n == 0) {
//         return;
//     } else {
//         int i = n % 2;
//         chuyennhiphan(n / 2);
//         printf("%d",i);
//     }
         
// }

// int main() {
//     int n;
//     printf("nhap vao so nguyen n: ");
//     scanf("%d",&n);
//     chuyennhiphan(n);
//     return 0;

// }

#include<stdio.h>
#include<math.h>

void doithapphan(long long binary) {
    int p = 0;
    int dec = 0;
    while(binary > 0) {
        dec += (binary % 2) * pow(2,p);
        ++p;
        binary /= 10;
    }
    printf("%lli",dec);
}

int main() {
    int n;
    scanf("%d",&n);
    doithapphan(n);
    return 0;
}
