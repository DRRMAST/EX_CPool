#include <stdio.h>
#include <unistd.h>

int my_compute_power_rec(int nb, int p)
{
	int re = 1;
	if(p == 0)
		return 1;
	if(p < 0)
		return 0;
	if(p > 0)
		re = re * my_compute_power_rec(nb,p - 1);
	printf("re=%d",re);
	return re;
}
int main()
{
	printf("%d",my_compute_power_rec(2,3));
}
