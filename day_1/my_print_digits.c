#include <stdio.h>
#include <unistd.h>

int my_print_digits(void)
{
	int t = '0';
	while(t <= '9')
	{
		write(1,&t,1);
		t++;
	}
	return 0;
}

int main() {
	my_print_digits();
	return 0;
}
