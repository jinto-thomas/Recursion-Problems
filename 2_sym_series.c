#include <stdio.h>

int sum_series (int a, int b)
{
		if (a > b)
				return 0; 
		else {
				return (a + sum_series((a+1),b));
		}
		
}

main()
{
		printf("%d",sum_series(1, 4));
		return 0;
}
