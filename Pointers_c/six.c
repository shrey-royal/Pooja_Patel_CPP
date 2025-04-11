#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void* getArray(char type, int size) {
    void* arr = NULL;
    int* ia = NULL;
    char* ca = NULL;
    float* fa = NULL;
    double* da = NULL;

    switch (type) {
        case 'i':
            ia = (int *)malloc(size * sizeof(int));
            for (int i = 0; i < size; i++) ia[i] = rand() % 100 + 1;
            arr = ia;
            break;

        case 'c':
            ca = (char *)malloc(size * sizeof(char));
            for (int i = 0; i < size; i++) ca[i] = 'a' + rand() % 26;
            arr = ca;
            break;
        
        case 'f':
            fa = (float *)malloc(size * sizeof(float));
            for (int i = 0; i < size; i++) fa[i] = (float)rand() / 100.0f;
            arr = fa;
            break;

        case 'd':
            da = (double *)malloc(size * sizeof(double));
            for (int i = 0; i < size; i++) da[i] = (double)rand() / 100.0f;
            arr = da;
            break;
            
        default:
            printf("Unknown type '%c'\n", type);
            return NULL;
    }

    if (!arr) {
        printf("Memory allocation failed!\n");
    }

    return arr;
}

int main() {
    srand(time(NULL));
    int* intArray = (int *)getArray('i', 5);
    
    if (intArray != NULL) {
        printf("Random int array: ");
        for (int i = 0; i < 5; i++) printf("%d, ", intArray[i]);
        printf("\b\b \n");
        free(intArray);
        intArray = NULL;
    }
    
    char* charArray = (char *)getArray('c', 10);
    if (charArray != NULL) {
        printf("Random char array: ");
        for (int i = 0; i < 10; i++) printf("%c, ", charArray[i]);
        printf("\b\b \n");
        free(charArray);
        charArray = NULL;
    }
    
    return 0;
}