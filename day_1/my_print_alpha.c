#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

int my_print_alpha(void)
{
	char t = 'a';
	while(t <= 'z')
	{
		my_putchar(t);
		t++;
	}
	return 0;
}

int main() {
	my_print_alpha();
	return 0;
}
