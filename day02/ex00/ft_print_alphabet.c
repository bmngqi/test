#include <unistd.h>

void ft_putchar(void)

{
	int x;
	for (x='a'; x <= 'z'; ++x)
	{
		write(1, &x, 1);
	}
	
}

int main()
{
ft_putchar();
write(1, "\n", 1);
return 0;
}
