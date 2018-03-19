#include <stdio.h>
#include <unistd.h>

int my_strlen(const char *s1)
{
	int n = 0;  
    while(*s1++)   
    {  
        n++;      
    }  
    return n;  
}
int my_putstring(char *ptr)
{
	return write(1,ptr,my_strlen(ptr));
}
int main()
{
	my_putstring("asdf");
}
