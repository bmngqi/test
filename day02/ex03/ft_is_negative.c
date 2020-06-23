/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 08:52:50 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/23 09:23:31 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n);

int main()
{
	int userInput;
	scanf("%i", &userInput);
	ft_is_negative(userInput);
	
	return 0;
}

void ft_is_negative(int n)
{
	char output;
	if (n >= 0)
	{
		output = 80;
		putchar(output);
	}
	else if (n < 0)
	{
		output = 78;
		putchar(output);
	}
}


