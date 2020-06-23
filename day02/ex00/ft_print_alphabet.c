/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 09:19:02 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/21 13:42:40 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
