#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void)

{
	int x;
	for (x='a'; x <= 'z'; ++x)
	{
		putchar(x);
	}
	
}

int main()
{
ft_print_alphabet();
return 0;
}
