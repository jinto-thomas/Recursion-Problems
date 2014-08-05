#include <stdio.h>

void print (int a, int b)
{
		if (a > b)
				return;
		else {
				printf("%d ",a);
				print(a+1,b);
		}
}

main()
{
		print(2,5);
		printf("\n");
		return 0;
}

