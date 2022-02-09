/*
định nghĩa đệ quy: là dùng khái niệm của chính nó để giải thích cho bản thân nó
hay nói cách khác là : từ cái tổng quát quy về cái ban đầu

phương pháp: - xác định được điều kiện chặn hay còn gọi là suy biến
             - xác định điều kiện tổng quát 

phân loại đệ quy: - đệ quy tuyến tính (từ tổng quát quy về 1 cái ban đầu, theo kiểu hình cái cây có nhiều nhánh)
                  - đệ quy nhị phân (dùng cho dãy số: fibonanci)
                  - đệ quy phi tuyến (thân hàm lặp gọi 1 số lần chính nó, nhiều hơn 2)
                  - đệ quy tương hỗ (hai hàm gọi chéo lẫn nhau)





*/

// #include<stdio.h>

// long U(int n);
// long G(int n);

// int main(){
//     int n;
//     printf("nhap vao so nguyen n: ");
//     scanf("%d",&n);
//     printf("U(%d) = %ld\n",n,U(n));
//     printf("G(%d) = %ld",n,G(n));
//     return 0;
// }

// long U(int n) {
//     if(n < 5) {
//         return (n);
//     }else {
//         return U(n - 1) + G(n - 2);
//     }
// }

// long G(int n) {
//     if(n < 8) {
//         return (n - 3);
//     }else {
//         return U(n - 1) + G(n - 2);
//     }
// }

// #include<stdio.h>

// long sumOfArray(int array[], int size);
// int maxOfArray(int array[], int size);
// int main() {
//     int array[100] = {0};
//     int n;
//     do
//     {
//         printf("nhap vao so phan tu cua mang: ");
//         scanf("%d",&n);
//     } while (n <= 0);
//     printf("nhap mang!\n");

//     //nhap mang
//     for(int i = 0 ; i < n ; i++) {
//         scanf("%d",&array[i]);
//     }
    
//     //xu li
//     printf("sum = %ld\n",sumOfArray(array,n));
//     printf("max = %d",maxOfArray(array,n));
//     return 0;
// }

// long sumOfArray(int array[], int size) {
//     if(size == 0) {
//         return 0;
//     } else {
//         return array[size - 1] + sumOfArray(array,size - 1); 
//     }      
// } 

// int maxOfArray(int array[], int size) {
//     if(size == 1) {
//         return array[0];
//     } else {
//         return array[size - 1] > maxOfArray(array,size - 1) ? array[size - 1] : maxOfArray(array,size - 1); 
//     }  
// }


