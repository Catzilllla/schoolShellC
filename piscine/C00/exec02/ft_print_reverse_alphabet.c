/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:17:09 by iadella           #+#    #+#             */
/*   Updated: 2020/07/16 23:30:03 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_reverse_alphabet(void)
{
	char varr;

	varr = 122;
	while (varr >= 97)
	{
		write(1, &varr, 1);
		varr = varr - 1;
	}
}
