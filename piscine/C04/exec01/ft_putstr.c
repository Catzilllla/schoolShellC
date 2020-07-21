/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 23:32:24 by iadella           #+#    #+#             */
/*   Updated: 2020/07/22 00:14:02 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C04 exec01
// Create a function that displays a string of characters on the standard output

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	
}

int main(void)
{
	char s[] = "Hello World!";
	
	ft_putstr(s);
}
