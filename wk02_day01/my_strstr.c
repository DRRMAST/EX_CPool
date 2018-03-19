#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
char *my_strstr ( char *str , char const *to_find )
{
	char *p;
	int len = my_strlen(to_find);
	while(*str++ && *to_find++){
		if(*str == *to_find){
			p = str;
			break;
		}
	}
	if(my_strncmp(p,to_find,len) == 0){
		return p;
	}
	else 
		return NULL;
}
int main()
{
	char *p = malloc(10);
	char *s = malloc(5);;
	p = strcpy(p,"wehelloew");
	s = strcpy(s,"zzz");
	printf("%s",strstr(p,s));
}
