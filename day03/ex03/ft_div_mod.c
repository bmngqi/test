/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:27:31 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/26 12:18:31 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <math.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a = 10;
	int b = 3;

	int _div;
	int _rem;
	int *div;
	int *mod;

	div = &_div;
	mod = &_rem;

	ft_div_mod(a, b, div, mod);
	return 0;
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	int answer;
	answer = a/b;
	
	int remainder;
	remainder = a%b;

	div = &answer;
	mod = &remainder;
}
