#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N1 100

#define M1 100

void fillMatrix(int A[][M1], int N, int M);
int sortMatrix(int A[][M1],int rowsize, int colsize);
void displayArray(int A[][M1], int N, int M);

int main(void)
{
    int array[N1][M1] = {0};

    fillMatrix(array, N1, M1);

    displayArray(array, N1, M1);

    sortMatrix(array, N1, M1);

    return  0;
}

void fillMatrix(int A[][M1], int N, int M)
{
    int rows = 0, columns = 0;

    printf("Enter a number of rows: ");
    scanf("%i", &rows);

    if(rows < 0 && rows >= 100)
    {
        printf("Invalid Input.\n");
        printf("Enter a number of rows: ");
        scanf("%i", &rows);
    }

    printf("Enter a number of columns: ");
    scanf("%i", &columns);

    if(columns < 0 && columns >= 100)
    {
        printf("Invalid Input.\n");
        printf("Enter a number of columns: ");
        scanf("%i", &columns);
    }

    srand(time(NULL));

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            A[i][j] = 0 + rand() % 100;
        }
    }
}

int sortMatrix(int A[][M1],int rowsize, int colsize)
{
    int temp = 0;
    for(int i = 0; i < rowsize; i++)
    {
        for (int j = 0 ; j < colsize; j++)
        {
            if(A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    return 0;
}

void displayArray(int A[][M1], int N, int M)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            printf("%i ", A[i][j]);
        }
    }
}