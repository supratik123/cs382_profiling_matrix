#include <stdio.h>
#include <stdlib.h>

#define N_ROWS 200
#define N_COLS 200
#define N_MATS 100

int **init_matrix(int rows, int cols)
{
    int **matrix = (int**) malloc(rows * sizeof(int*));

    for (int i = 0; i < rows; ++i) {
        matrix[i] = (int*) malloc(cols * sizeof(int));
    }

    return matrix;
}

void add_matrix(int **dest, int **src, int rows, int cols)
{
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            dest[i][j] += src[i][j];
        }
    }
}

long get_grand_sum(int **mat, int rows, int cols)
{
    // TODO: write this
    return 0;
}

int main()
{
    int **matrix = init_matrix(N_ROWS, N_COLS);

    for (int i = 0; i < N_MATS; ++i) {
        int **new_matrix = init_matrix(N_ROWS, N_COLS);

        for (int y = 0; y < N_COLS; ++y) {
            for (int x = 0; x < N_ROWS; ++x) {
                scanf("%d", &new_matrix[x][y]);
            }
        }

        add_matrix(matrix, new_matrix, N_ROWS, N_COLS);
    }

    printf("Grand sum: %ld\n", get_grand_sum(matrix, N_ROWS, N_COLS));

    return 0;
}
