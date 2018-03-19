#include <stdio.h>
#include <unistd.h>

int my_compute_power_it(int nb, int p)
{
	int re = 1;
	if(p == 0)
		return 1;
	if(p < 0)
		return 0;
	while(p > 0)
	{
		re = re * nb;
		printf("re %d\n",re);
		p--;
	}
	return re;
}

int main()
{
	printf("%d",my_compute_power_it(3,0));
}
