#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
char *my_strcapitalize ( char * str )
{
	char *p = str;
	int nbr_flag = 0;
	int wd_flag = 1;
	while(*p)
	{
		if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')){
			if(*p >= 'a' && *p <= 'z' && wd_flag == 1){
				*p = *p - 32;
				wd_flag = 0;
				nbr_flag = 0;
			}
			if(*p >= 'A' && *p <= 'Z' && nbr_flag == 1){
				*p = *p + 32;
				wd_flag = 0;
			}
		}
		else{
			if(*p >= '0' && *p <= '9'){
				nbr_flag = 1;
			}
			else{
				nbr_flag = 0;
				wd_flag = 1;
			}
		}
		p++;
	}
	return str;
}
int main()
{
	char *p = malloc(50);
	p = strcpy(p,"hey,how are you? 42WORds forty-two;fifty+one");
	p = my_strcapitalize(p);
	printf("%s",p);
}
