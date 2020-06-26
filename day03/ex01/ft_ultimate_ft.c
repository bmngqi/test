/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:23:54 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/26 12:13:51 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int a;
	int *nbr1;
	int **nbr2;
	int ***nbr3;
	int ****nbr4;
	int *****nbr5;
	int ******nbr6;
	int *******nbr7;
	int ********nbr8;
	int *********nbr;
	
	nbr1 = &a;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr = &nbr8;

	ft_ultimate_ft(nbr);

	return 0;
		
}
