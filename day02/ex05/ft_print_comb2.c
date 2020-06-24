/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:50:44 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/24 13:50:49 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_print_comb2(void)
{
	int w;
	int x;
	int y;
	int z;

	w = 48;
	while(w <= 57)
	{
		x = 48;
		while(x <= 56)
		{
			y = 48;
			while(y <= 57)
			{
				z = 48;
				while(z <= 57)
				{
					putchar(w);
					putchar(x);

					putchar(32);
					putchar(y);
					putchar(z);

					putchar(44);
					putchar(32);
					z++;
				}
				y++;
			}
			x++;
		}
		w++;	
	}
}

int main(void)
{
	ft_print_comb2();
	
	
	return 0;
}
