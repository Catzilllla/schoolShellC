/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 02:36:03 by iadella           #+#    #+#             */
/*   Updated: 2020/07/21 03:50:33 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_div_mod(int a, int b, int *div, int *mod)
{
	int w;
	int w1;

	 w = a % b;
	 w1 = a / b;
	 
	 *div = &w;
	 *mod = &w1;
}

int main(void)
{
	printf("Piscine C01 - exec03");

	int e1, e2, del, ost;

	e1 = 5;
	e2 = 11;

	printf("e1 = %i\ne2 = %i\n", e1, e2);
	ft_div_mod(e1, e2, del, ost);
	printf("del = %i\nost = %i\n", del, ost);
}
