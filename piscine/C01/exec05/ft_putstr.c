/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 03:52:27 by iadella           #+#    #+#             */
/*   Updated: 2020/07/21 04:28:36 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		write(1, &str, 1);
		str++;
	}
}

int main(void)
{
	char s[] = "Hello world!";

	ft_putstr(s);
}
