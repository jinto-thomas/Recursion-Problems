#include <stdio.h>


int reverse(int x)
{
		if (x < 10)
				return x;
		else {
				return 10 * (x % 10) + reverse(x /10);

		}
}

main()
{
		printf("%d\n",reverse(89));
}
