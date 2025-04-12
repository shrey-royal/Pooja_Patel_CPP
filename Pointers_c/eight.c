#include <stdio.h>

int add(int a, int b) {
    return a+b;
}

int multiply(int a, int b) {
    return a*b;
}

int main() {
    int (*fp)(int, int);    //declaration of a function pointer
    
    fp = &add;
    printf("%d\n", fp(2, 3));

    fp = &multiply;
    printf("%d\n", fp(2, 3));

    return 0;
}