/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 04:32:27 by iadella           #+#    #+#             */
/*   Updated: 2020/07/21 05:09:32 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char		*ft_strcpy(char *dest, char *src)
{
	while(*src != '\0')
	{
		*dest = *src;
		src++;
	}
}

int main(void)
{
	char a[] = "Hello";
	char b[] = "FFFFF";
	
	ft_strcpy(a, b);
	printf("a = %s\nb = %s\n", a, b);
}
