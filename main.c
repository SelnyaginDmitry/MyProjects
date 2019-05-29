#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	printf("Enter the coefficient of quadratic equation:  ");
	scanf("%d%d%d", &a, &b, &c);
	float x;
	if ((a==0) && (b==0))
	{
		printf("none\n");
	}
	else if (a==0)
	{
		x = a/b;
		printf("x1 = x2 = %f\n", x);
	}
	else
	{
		float D = b*b - 4*a*c;
		if (D<0)
		{
			printf("no real roots\n");
		}
		else if (D == 0)
		{
			x = -b/(2*a);
			printf ("x1 = x2 = %f\n", x);
		}
		else
		{
			x = (-(float)b + sqrt(D))/(2*a);
			printf ("x1 = %f\n", x);
			x = (-(float)b - sqrt(D))/(2*a);
			printf ("x2 = %f\n", x);
		}
	}

	system("pause");
	return 0;
}