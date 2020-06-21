/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 09:20:48 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/21 09:20:55 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
