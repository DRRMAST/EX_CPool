#include <unistd.h>

int my_putnumber(int num)
{	
	if(num >= 0)
	{
		if(num >= 10)
	{
		my_putnumber(num / 10);
		num = num % 10;
	}
	if(num >= 0 && num < 10)
	{
		char res = num + '0';
		write(1,&res,1);
	}
	}
	else
	{
		char minus = '-';
		num = num * -1;
		write(1,&minus,1);
		if(num >= 10)
	{
		my_putnumber(num / 10);
		num = num % 10;
	}
	if(num >= 0 && num < 10)
	{
		char res = num + '0';
		write(1,&res,1);
	}
	}

	return 0;
}

int main()
{
	my_putnumber(-1000000000);
}






