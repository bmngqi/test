/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 09:26:03 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/23 09:27:30 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print_numbers(void);

int main(void)
{
  
  printf("%c", ft_print_number());
  return 0;
}

void displayNumbers(void)
{
  
}

void ft_print_numbers(void)
{
  for (int Num = 48; Num <= 57; ++Num)
    {
      putchar(Num);
    }
}
