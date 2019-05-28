//#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Func(double x)
{
    return (pow(x, 3) - exp(x) + 1);
}

float dFunc(float x)
{
    return (3 * pow(x, 2) - exp(x));
}

float Recr(float x, int n)
{
    //double ff1 = Func(x);
    //double ff11 = dFunc(x);
    //double powpow = pow(10.0, -n);
    x -= Func(x) / dFunc(x);
    if (fabs(Func(x)) >= pow(10.0, -n))
    {
        //double ff1 = Func(x);
        Recr(x, n);
    }
    else return x;
}

int main()
{
    int n;
    scanf_s("%d", &n);
    float x = 0.5;
    float r = Recr(x, n);
    printf("%f\n", r);
    system("pause");
    return 0;
}
