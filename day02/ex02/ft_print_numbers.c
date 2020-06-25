/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 09:26:03 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/25 10:25:47 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print_numbers(void);

int main(void)
{
  ft_print_numbers();

  return 0;
}

void ft_print_numbers(void)
{
  /*for (int Num = 48; Num <= 57; ++Num)
    {
      putchar(Num);
    }
	*/
	int Num = 48;
	while (Num <= 57)
	{
		putchar(Num);

		++Num;
	}
}
