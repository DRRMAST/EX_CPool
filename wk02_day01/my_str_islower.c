#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int my_str_islower ( char const * str )
{
	while(*str)
	{
		if(*str < 'a' || *str > 'z'){
			return 0;
		}
		str++;
	}
	return 1;
}
int main()
{
	char *p = malloc(10);
	int r;
	p = strcpy(p,"ASF");
	r = my_str_islower(p);
	printf("%d",r);
}
