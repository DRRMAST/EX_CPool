#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int my_str_isprintable ( char const * str )
{
	while(*str)
	{
		if(*str < 32 || *str > 126){
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
	p = strcpy(p,"123ASF");
	r = my_str_isprintable(p);
	printf("%d",r);
}
