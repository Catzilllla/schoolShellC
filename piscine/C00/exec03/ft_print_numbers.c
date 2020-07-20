/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 21:41:14 by iadella           #+#    #+#             */
/*   Updated: 2020/07/18 21:56:38 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_numbers(void)
{
	int num = 48;

	while(num <= 57)
		{
			write(1, &num, 1);
			num++;
		}
}

int		main(void)
{
		ft_print_numbers();
		return(0);
}
