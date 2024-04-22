/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:07:08 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/17 21:38:51 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_commas(void);

void	ft_commas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_space(void);

void	ft_space(void)
{
	ft_putchar(' ');
}

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	num[2];

	num[0] = 0;
	while (num[0] <= 98)
	{	
		num[1] = num[0] + 1;
		while (num[1] <= 99)
		{
			ft_putchar((num[0] / 10) + '0');
			ft_putchar((num[0] % 10) + '0');
			ft_space();
			ft_putchar((num[1] / 10) + '0');
			ft_putchar((num[1] % 10) + '0');
			if (num[0] < 98 || num[1] < 99)
				ft_commas();
			num[1]++;
		}
	num[0]++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
