#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int* arr = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }

    printf("\narr[%d] = {", 10);
    for (int i = 0; i < 10; i++) {
        printf("%d, ", *(arr + i));
    }
    printf("\b\b}\n");

    free(arr);

    printf("\narr[%d] = {", 10);
    for (int i = 0; i < 10; i++) {
        printf("%d, ", *(arr + i));
    }
    printf("\b\b}\n");

    return 0;
}