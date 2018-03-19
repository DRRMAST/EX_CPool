#include <stdio.h>
#include <unistd.h>

int my_print_revalpha()
{
	char t = 'z';
	while(t >= 'a')
	{
		write(1,&t,1);
		t--;
	}
	return 0;
}

int main() {
	my_print_revalpha();
	return 0;
}
