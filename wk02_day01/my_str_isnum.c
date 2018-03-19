#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int my_str_isnum ( char const * str )
{
	while(*str)
	{
		if(*str < '0' || *str > '9'){
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
	p = strcpy(p,"11264");
	r = my_str_isnum(p);
	printf("%d",r);
}
