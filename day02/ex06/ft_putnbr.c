/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:49:54 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/24 15:35:57 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putnbr(int nb);

int main(void)
{
	int userInput;
	scanf("%i", &userInput);

	ft_putnbr(userInput);
	
	return 0;
}

void ft_putnbr(int nb)
{	
	if((nb <9) && (nb >= 0))
	{
		write(1, &nb, 1);
	}
	else if (nb < 0)
	{
		putchar('-');
		char newValue;
		newValue = nb % 2;
		char priValue;
		priValue = nb + 0;
		write(1, &priValue, 1);
		write(1, &newValue, 1);
	}
	else
	{
		char newValue;
		newValue = nb % 2;
		char priValue = nb + 0;
		write(1, &priValue, 1);
		write(1, &newValue, 1);
	}
}
