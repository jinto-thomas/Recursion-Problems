#include <stdio.h>
#include <string.h>
void str_rev(char *s)
{
		if (*s == 0)
				return;
		else {
				str_rev(s+1);
				printf("%c",*s);
		}
}

main()
{
		char s[] = "hello";
		str_rev(s);
	//	printf("
}
