/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 22:57:04 by iadella           #+#    #+#             */
/*   Updated: 2020/07/21 23:31:02 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//C04 exec00
//Create a function that counts and returns the number of characters in a string

#include <stdio.h>
//#include <>

int ft_strlen(char *str)
{
	int i = 0;
	int n = 1;

	while(str[i] != '\0')
	{	
		i++;
		n++;
	}
	
	if(str[i] == '\0')
		n--;
	return n;
}

int main(void)
{
	char s[] = "Hello World!";

	printf("\n %s %c\n\n", s, '\0');
	printf("number of counts: %d\n\n", ft_strlen(s));
}
