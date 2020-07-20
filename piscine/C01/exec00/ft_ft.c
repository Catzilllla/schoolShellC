/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 20:17:16 by iadella           #+#    #+#             */
/*   Updated: 2020/07/20 20:29:26 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int a = 5;
	int *ptr = &a;

	printf("a:%d\n", a);
	printf("ptr: %p\n", &ptr);
	ft_ft(ptr);
	printf("a:%d\n", a);
	printf("ptr: %p\n", &ptr);
	return 0;
}

