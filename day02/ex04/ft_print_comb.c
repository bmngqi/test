/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:56:04 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/24 09:13:35 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

//funtions
void ft_print_comb(void);

int main(void)
{
	ft_print_comb();
	return 0;
}

void ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = 48;
	while(x <= 55)
	{	
		y = 49;
		while(y <= 56)
		{	
			z = 50;
			while(z <= 57)
			{
				
				if((x != y) && (x != z) && (y != z))
				{
					putchar(x);
					putchar(y);
					putchar(z);

					putchar(44);
					putchar(32);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
