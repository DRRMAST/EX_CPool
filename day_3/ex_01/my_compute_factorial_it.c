#include <unistd.h>
#include <stdio.h>
int my_compute_factorial_it(int nb)
{
	int i = nb - 1;
	int re = 1;
	if(nb != 0 || nb != 1){
		while(i > 0){
			re = re * (i + 1);
			i--;
		}
		printf("%d",re);
	}
	return 0;	
}
int main()
{
	my_compute_factorial_it(11);
}
