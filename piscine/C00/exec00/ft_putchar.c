/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 20:10:21 by iadella           #+#    #+#             */
/*   Updated: 2020/07/21 21:18:30 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C00 exec00

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_putchar('A');
}
