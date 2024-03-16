#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10
void multiplyMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2)
    {
        printf("Error: Matrices cannot be multiplied.\n");
        return;
    }
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k)
             {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
 {
    for (int i = 0; i < rows; ++i)
        {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()

{
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for the first matrix:\n");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows1; ++i)
        {
        for (int j = 0; j < cols1; ++j)
         {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix:\n");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }


    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
    printf("Resultant Matrix:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}
