/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 23:18:27 by iadella           #+#    #+#             */
/*   Updated: 2020/07/21 02:34:28 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int c = *a;
	
	*a = *b;
	*b = c;
}

int main(void)
{
	int e1 = 5;
	int *f1 = &e1;
	
	int e2 = 11;
	int *f2 = &e2;
	
	printf("e1 = %i\ne2 = %i\n\n", e1, e2);
	printf("*f1 = %p\n*f2 = %p\n\n", &f1, &f2);
	ft_swap(f1, f2);
	printf("swap e1 & e2:\ne1 = %i\ne2 = %i\n\n", *f1, *f2);
	return 0;
}
