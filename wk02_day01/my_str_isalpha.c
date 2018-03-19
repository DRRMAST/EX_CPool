#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int my_str_isalpha ( char const * str )
{
	while(*str)
	{
		if(*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z'){
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
	p = strcpy(p,"a");
	r = my_str_isalpha(p);
	printf("%d",r);
}
