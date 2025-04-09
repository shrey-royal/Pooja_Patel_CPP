#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char **p = (char **)malloc(3 * sizeof(char *));

    for (int i = 0; i < 3; i++) {
        p[i] = (char *)malloc(3 * sizeof(char));
    }
    

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            p[i][j] = 'A' + rand() % 26;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // printf("%u, ", p+i+j);
            // printf("%u, ", &(&p[i])[j]);
            printf("%c, ", p[i][j]);
            // printf("%c, ", *(*(p+i)+j));
        }
        printf("\n");
    }
    return 0;
}