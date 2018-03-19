#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int my_strncmp(char const *s1,char const *s2,int n)
{
	int i = 0;
	while(*s1 == *s2 && i < n){
		if(*s1 == 0)
			return 0;
		s1++;
		s2++;
		i++;
	}
	return (*s1) - (*s2);
}
int main()
{
	char *s1 = malloc(5);
	char *s2 = malloc(5);
	int r;
	s1 = strcpy(s1,"asdf");
	s2 = strcpy(s2,"ascf");
	r = my_strncmp(s1,s2,3);
	printf("%d",r);
}
