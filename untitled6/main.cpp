
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

const int size = 10000;
const int RAND_MAX_F = 20;

void Write(int *parr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", parr[i]);
    }
    printf("\n");
}

bool Compare(int prev, int pres)
{
    if (prev > pres) return true;
    else return false;
}

void Replace(int *parr, int i)
{
    int temp = parr[i];
    parr[i] = parr[i + 1];
    parr[i + 1] = temp;
}

void BubbleSort(int *parr, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (Compare(k*parr[j], k*parr[j + 1]))
                Replace(&parr[0], j);
        }
    }
}

int main()
{

    srand(time(NULL));
    printf("%d\n", RAND_MAX_F);
    int* parr = (int*)malloc(size_t(size));
    if (parr == NULL)
    {
        printf("ERROR\n");
    }
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        *(parr + i) = rand() - 10; // rand from -10 to 10
    }
    Write(parr, n);
    BubbleSort(&parr[0], n, k);
    Write(parr, n);

    free(parr);
    srand(time(NULL));
    system("pause");
    return 0;
}