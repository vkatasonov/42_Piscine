/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:27:07 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/21 20:35:55 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c);

void	ft_putchar(int c)
{
	c = c + 48;
	write(1, &c, 1);
}

void	ft_print_matrix(void)
{	
	int	i;
	int	j;
	int	x;
	int	y;
	int	matrix[6][6];

	x = 6;
	y = 6;
	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			matrix[i][j] = 0;
			ft_putchar (matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int	main(void)
{
	ft_print_matrix();
	return (0);
}
