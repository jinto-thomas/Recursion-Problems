#include <stdio.h>
#include <math.h>

int factorial (int x)
{
		if (x == 1)
				return 1;
		else {
				return x * factorial(x-1);
		}
}


float my_exp (int x, int n)
{
		if (n == 0)
				return 1;
		else {
				return (pow(x, n) / factorial(n)) + my_exp (x, n-1);
		}

}

main()
{
		printf("%f\n",my_exp(5,2));
		return 0;
}
