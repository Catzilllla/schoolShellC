/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 21:58:03 by iadella           #+#    #+#             */
/*   Updated: 2020/07/19 20:27:34 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_is_negative(int n)
{
	//прив введении через main чилса(отриц или положит) - результат вывода N или P
	while(n > 0)
	{
		char c1 = 'P';

		write(1, &c1, 1);
		n =  0;
	}

	while(n < 0)
	{
		char c2 = 'N';

		write(1, &c2, 1);
		n = 0;
	}
}

int main(void)
{
	int  digit;
	
	while((digit = getchar()) !=EOF)
	{
		putchar(digit);
		ft_is_negative(digit);
	}
	
	return 0;
}

