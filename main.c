#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int N, i, j;
    printf ("Enter N to have all the simple numbers less than N\nN = ");
    scanf("%d", &N);
    printf ("\nSimple numbers:\n");
    for (i = 2; i < N; i++)
    {
        int b = 1;
        for (j = 1; j < i; j++)
        {
            float a = (float)i/(float)j - i/j;
            if ((a == 0.0) && (i!=j) && (i!=1) && (j!=1))
            {
                b = 0;
                break;
            }
        }
        if(b==1)
        {
            printf("%d\n", i);
        }
    }

    printf("\n");
    system("pause");
    return 0;
}