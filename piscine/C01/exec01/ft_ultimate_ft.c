/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 22:25:17 by iadella           #+#    #+#             */
/*   Updated: 2020/07/20 23:25:35 by iadella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int a;
	int *a1;
	int **a2;
	int ***a3;
	int ****a4;
	int *****a5;
	int ******a6;
	int *******a7;
	int ********a8;
	int *********a9;

	a = 0;
	a1 = &a;
	a2 = &a1;
	a3 = &a2;
	a4 = &a3;
	a5 = &a4;
	a6 = &a5;
	a7 = &a6;
	a8 = &a7;
	a9 = &a8;
	
	// функция работает, как посмотреть все адреса на указателях?
	write(1, &a9, 10);
	ft_ultimate_ft(a9);
	write(1, &a9, 10);
}