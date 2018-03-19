#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int my_strlen(const char *str)
{
	int n = 0;  
    while(*str++)   
    {  
        n++;      
    }  
    return n;  
}
char *my_revstr ( char * str )
{
	int len = 0;
	int i = 0;
	int j = 0;
	char t;
	len = my_strlen(str);
	j = len - 1;
	while(i < len/2)
	{
		t = str[j];
		str[j] = str[i];
		str[i] = t;
		i++;
		j--;
	}
	return str;
}
int main()
{
	char *p = malloc(5);
	p = strcpy(p,"hello");
	char *r = malloc(5);
	r = my_revstr(p);
	printf("%s",r);
}
