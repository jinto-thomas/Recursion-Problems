#include <stdio.h>
#include <string.h>

void reverse_str(char *s, int len, char *p)
{
		char t;
		if (len < 2)
				return;
		else {
				reverse_str(s+1,len-1,p);
				t = *s;
				*s = p[len-1];
				p[len-1] = t;
				 
		}
}

main()
{
		char s[] = "ABCDEFGHIJK";
		reverse_str(s,strlen(s),s);
		printf("%s\n",s);
}
