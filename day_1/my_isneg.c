
#include <unistd.h>

int my_isneg(int n)
{
	char r = 'P';
	if(n < 0)
		r = 'N';
	else
		r = 'P';
	return r;
}

int main()
{
	char r;
	r = my_isneg(1);
	write(1,&r,1);
	r = my_isneg(-1);
	write(1,&r,1);
	r = my_isneg(0);
	write(1,&r,1);
	return 0;
}
