#include<stdio.h>
#include<math.h>

void daoso(int k);
int songuyento(int k);


int main() {
    int n;
    scanf("%d",&n);
    daoso(n);

    for(int i = 0 ; i < 10 ; i++) {
        if(songuyento(i) == 1) {
            printf("%d ",i);
        }
    }

    return 0;
}

void daoso(int k) {
    if(k == 0) {
        return;
    }else {
        int i = k % 10;
        daoso(k / 10);
        printf("%d",i);
    }
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