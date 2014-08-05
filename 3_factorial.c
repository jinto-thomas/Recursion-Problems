#include <stdio.h>

int factorial(int x)
{
		if (x == 1)
				return 1;
		else {
				return x * factorial(x-1);
		}
}

main()
{
		printf("%d\n",factorial(5));
		return 0;
}
