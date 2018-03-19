#include <unistd.h>
#include <stdio.h>
void my_swap( int *a , int *b)
{
	int t;
	t = *b;
	*b = *a;
	*a = t;
}

int main()
{
	int a = 1,b = 2;
	int *pa = NULL,*pb = NULL;
	
	pa = &a;
	pb = &b;
	my_swap(pa,pb);
	printf("%d",*pa);
	printf("%d",*pb);
}
