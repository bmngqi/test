/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:38:34 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/26 09:58:45 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int a_value = 16;
	int b_value = 30;

	int *a_address;
	int *b_address;

	a_address = &a_value;
	b_address = &b_value;

	ft_swap(a_address, b_address);
	return 0;
}

void ft_swap(int *a, int *b)
{
	int x;
	
	x = *a;
	*a = *b;
	*b = x;

	printf("%i, %i", *a, *b);
}
