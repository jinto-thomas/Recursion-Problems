#include <stdio.h>
#include <math.h> 

//int k = 2;

int factorial(int x)
{
		if (x == 1)
	            return 1;
		else {
				return x * factorial(x-1);
        }
}


float sine_exp (float x, int k)
{
		if (k == 0)
				return x;
		else {
				return (((pow(-1,k)) * (pow(x,2*k + 1))) / factorial(2 * k + 1)) + sine_exp (x,k-1); ;
		}
}

main()
{
		printf("%f\n",sine_exp(100, 2));
		return 0;
}
