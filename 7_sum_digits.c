#include <stdio.h>

int sum_digits(int n)
{
		if (n < 10)
				return n;
		else 
				return (n%10 + sum_digits(n/10));
		
}

main()
{
		printf("%d\n",sum_digits(14008));
}

