#include <stdio.h>
#include <string.h>

int is_paliandrome(char *s,int len,char *p)
{
		if (len < 2)
				return;
		else {
				is_paliandrome(s+1, len-1,p);
				if (p[len-1] == *s)
						return 1;
				else
						return 0;
		}
}

main()
{
		char s[] = "hello";
		char p[] = "malayalam";

		printf("s : %d\n",is_paliandrome(s,strlen(s),s));
		printf("p : %d\n",is_paliandrome(p,strlen(p),p));
}



