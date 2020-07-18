/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:33:38 by iadella           #+#    #+#             */
/*   Updated: 2020/07/16 23:15:51 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char var;

void	ft_print_alphabet(void)
{
	var = 97;
	while(var <= 122)
	{
		write(1, &var, 1);
		var = var + 1;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return(0);
}
