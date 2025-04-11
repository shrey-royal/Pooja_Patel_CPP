#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct { 
    char type;      // 'i', 'f', 'd', 'c' 
    void* data;     // pointer to dynamically allocated column data 
} Column; 
 
typedef struct { 
    Column* columns;  // array of columns 
    int num_columns; 
    int num_rows; 
} Table;

Table* createTable(int rows, int cols, char types[]) {
    Table* t = (Table *)malloc(sizeof(Table));
    t->num_columns = cols;
    t->num_rows = rows;
    t->columns = (Column *)malloc(cols * sizeof(Column));

    for (int i = 0; i < cols; i++) {
        t->columns[i].type = types[i];

        switch (types[i]) {
            case 'i':
                t->columns[i].data = malloc(rows * sizeof(int));
                for (int j = 0; j < rows; j++)
                    ((int *)t->columns[i].data)[j] = rand() % 100 + 1;
                break;

            case 'f':
                t->columns[i].data = malloc(rows * sizeof(float));
                for (int j = 0; j < rows; j++)
                    ((float *)t->columns[i].data)[j] = (float)(rand() % 10000) / 100.0f;
                break;

            case 'd':
                t->columns[i].data = malloc(rows * sizeof(double));
                for (int j = 0; j < rows; j++)
                    ((double *)t->columns[i].data)[j] = (double)(rand() % 10000) / 100.0;
                break;

            case 'c':
                t->columns[i].data = malloc(rows * sizeof(char));
                for (int j = 0; j < rows; j++)
                    ((char *)t->columns[i].data)[j] = 'a' + rand() % 26;
                break;

            default:
                printf("Unknown type '%c'\n", types[i]);
                break;
        }
    }
    return t;
}

void printTable(Table* t) {
    for (int row = 0; row < t->num_rows; row++) {
        printf("Row %d: ", row);
        for (int col = 0; col < t->num_columns; col++) {
            char type = t->columns[col].type;
            switch (type) {
                case 'i':
                    printf("%4d  ", ((int *)t->columns[col].data)[row]);
                    break;
                
                case 'f':
                    printf("%6.2f  ", ((float *)t->columns[col].data)[row]);
                    break;
                
                case 'd':
                    printf("%7.2ld  ", ((double *)t->columns[col].data)[row]);
                    break;
                
                case 'c':
                    printf(" %c  ", ((char *)t->columns[col].data)[row]);
                    break;
            }
        }
        printf("\n");
    }
}

void freeTable(Table* t) {
    for (int i = 0; i < t->num_columns; i++) {
        free(t->columns[i].data);
    }
    free(t->columns);
    free(t);
}

int main() {
    srand(time(NULL));

    int rows = 4;
    int cols = 3;
    char types[] = {'i', 'c', 'f'};

    Table* table = createTable(rows, cols, types);
    printTable(table);
    freeTable(table);

    return 0;
}