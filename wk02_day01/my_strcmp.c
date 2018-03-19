#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int my_strcmp(char const *s1,char const *s2)
{
	while(*s1 == *s2){
		if(*s1 == 0)
			return 0;
		s1++;
		s2++;
	}
	return (*s1) - (*s2);
}
int main()
{
	char *s1 = malloc(5);
	char *s2 = malloc(5);
	int r;
	s1 = strcpy(s1,"asbf");
	s2 = strcpy(s2,"asdf");
	r = my_strcmp(s1,s2);
	printf("%d",r);
}
