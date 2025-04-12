#include <stdio.h>

int add(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

int multiply(int a, int b) {
    return a*b;
}

int division(int a, int b) {
    return a/b;
}

int main() {
    int (*fp_arr[])(int, int) = {add, sub, multiply, division};

    printf("\nadd: %d", fp_arr[0](10, 5));
    printf("\nsub: %d", fp_arr[1](10, 5));
    printf("\nmultiply: %d", fp_arr[2](10, 5));
    printf("\ndivision: %d", fp_arr[3](10, 5));
    
    return 0;
}