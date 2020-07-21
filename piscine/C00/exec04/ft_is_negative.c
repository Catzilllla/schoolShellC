/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 21:58:03 by iadella           #+#    #+#             */
/*   Updated: 2020/07/22 02:36:21 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C00 exec04
// Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.

//СЦУКО НЕ РАБОТАЕТ КАК НАДО :(

#include <unistd.h>
#include <stdio.h>

void ft_is_negative(int n)
{	
	
	char c1 = 'P';
	char *cc1 = &c1;
	
	char c2 = 'N';
	char *cc2 = &c2;
	int i = 1;

	while(n >= 0 && i != 0)
	{
		write(1, &cc1, 1);
		i = 0;
	}
	
	i = 1;

	while(n < 0 && i != 0)
	{
		write(1, &cc2, 1);
		i = 0;
	}
}

int main(void)
{
	int digit;

	while((digit = getchar()) !=EOF)
	{
		putchar(digit);
		ft_is_negative(digit);
		return 0;
	}
}

