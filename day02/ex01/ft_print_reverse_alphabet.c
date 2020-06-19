#include <unistd.h>
#include <stdio.h>

void ft_print_reverse_alphabet(void)
{	
	int ch;
	for (ch = 'z'; ch >= 'a'; --ch)
	putchar(ch);
}

int main()
{
	ft_print_reverse_alphabet();	
	return 0;
}
