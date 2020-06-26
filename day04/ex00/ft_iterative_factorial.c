/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:49:08 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/26 14:59:26 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb);

int main()
{
	ft_iterative_factorial(5);
	return 0;
}

int ft_iterative_factorial(int nb)
{
	if(nb <= 5)
	{
		nb *= (nb - 1);
		ft_iterative_factorial(nb)
			
		return 0;
	}

}

