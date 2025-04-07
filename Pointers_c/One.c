#include <stdio.h>

int main() {
    char arr[10];
    char *p;

    p = &arr[0];

    for (int i = 0; i < 10; i++) {
        printf("\nEnter arr[%d]: ", i);
        scanf(" %c", &p[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("\narr[%d] = %c", i, p[i]);
    }

    return 0;
}