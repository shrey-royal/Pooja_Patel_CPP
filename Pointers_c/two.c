#include <stdio.h>

int main() {
    int arr[10] = {12, 23, 23, 12, 23, 345, 465, 56, 45, 234};
    int *p = arr;

    // %u - unsigned int (only positives are allowed)
    // printf("%u, %u", arr, &arr[0]);

    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("(%u, %3d),\t", p+i, *(p+i));
    }

    return 0;
}