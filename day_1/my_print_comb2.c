#include <unistd.h>

void my_putchar(char c)
{
	write(1,&c,1);
}

int my_print_comb2()
{
	int n1 = 0;
	int n2 = 0;
	char a1,a2,b1,b2;
	
	while(n1 < 100)
	{
		n2 = n1;
		while(n2 < 100)
		{
			
			
			if(n1 >= n2)
			{
				n2++;
				continue;
			}
			a1 = n1 / 10 % 10 + '0';
			a2 = n1 % 10 + '0';
			b1 = n2 / 10 % 10 + '0';
			b2 = n2 % 10 + '0';
			my_putchar(a1);
			my_putchar(a2);
			my_putchar(' ');
			my_putchar(b1);
			my_putchar(b2);
			if(n1 != 98)
				my_putchar(',');
			n2++;
		}
		n1++;
	}
	return 0;
}

int main()
{
	my_print_comb2();
	return 0;
}

