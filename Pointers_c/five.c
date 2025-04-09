#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char **p = (char **)malloc(3 * sizeof(char *));

    for (int i = 0; i < 3; i++) {
        p[i] = (char *)malloc(10 * sizeof(char));
    }

    for (int i = 0; i < 3; i++) {
        printf("Enter name: ");
        scanf(" %9[^\n]", p[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; p[i][j] != '\0'; j++) {
            // printf("%u, ", p+i+j);
            // printf("%u, ", &(&p[i])[j]);
            printf("%c, ", p[i][j]);
            // printf("%c, ", *(*(p+i)+j));
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        free(p[i]);
        p[i] = NULL;
    }
    free(p);
    p = NULL;
    
    return 0;
}