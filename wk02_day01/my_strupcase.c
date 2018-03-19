#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *my_strupcase ( char * str )
{
	char *p = str;
	while(*p != 0)
	{
		if(*p >= 'a' && *p <= 'z')
			*p = *p - 32;
		p++;
	}
	return str;
}

int main()
{
	char *str = malloc(10);
	str = strcpy(str,"aA-b0c=D\0");
	str = my_strupcase(str);
	printf("%s",str);
}
