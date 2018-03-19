#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
char *my_strcpy ( char *dest , char const *src )
{
	char *p = dest;
	if(dest == NULL && src == NULL)
		return NULL;
	if(dest == src)
		return dest;
	while(*dest != 0 || *src != 0){
		*dest++ = *src++;
	}
	return p;
}
int main()
{
	char *p = malloc(6);
	p = my_strcpy(p,"hello\0");
	printf("%s",p);
	return 0;
}
