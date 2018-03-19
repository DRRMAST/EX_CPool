#include <unistd.h>
#include <stdio.h>

int my_compute_factorial_rec(int nb)
{
	int re = 0;
	if(nb == 1 || nb == 0)
		re = 1;
	else
		re = nb * my_compute_factorial_rec(nb - 1);
	return re;
}
int main()
{
	int re;
	re = my_compute_factorial_rec(1);
	printf("%d",re);
}
