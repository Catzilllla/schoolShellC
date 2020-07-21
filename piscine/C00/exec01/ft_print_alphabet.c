/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:33:38 by iadella           #+#    #+#             */
/*   Updated: 2020/07/21 21:15:45 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void	ft_print_alphabet(void)
{
	char var = 'a';
	while(var <= 'z')
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
