#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int *p = (int *)malloc(10 * sizeof(int));
    // int *p = (int *)calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++) {
        p[i] = 'A' + rand() % 26;
    }

    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("(%u, %d),\t", (p+i), *(p+i));
    }

    if (p != NULL) {
        free(p);
        p = NULL;
    }

    printf("%u, %d", p, *p);

    return 0;
}