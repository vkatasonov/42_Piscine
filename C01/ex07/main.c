/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:19:02 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/23 15:11:26 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_arr_int(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tabla[] = {1,2,3,4,5};

	ft_rev_int_tab(tabla, 5);
	ft_put_arr_int(tabla, 5);
	return (0);
}

