/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:11:57 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/23 13:05:38 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(int x[])
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (i < 10)
	{
		if (b == 1)
		{
			ft_putchar(x[i] + 48);
		}
		else
		{
			if (x[i] > 0)
			{
				b = 1;
				ft_putchar(x[i] + 48);
			}
		}
		i++;
	}
}

void	ft_preventoverflow(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_fillarray(int x[], int nb)
{
	int	t;

	t = 9;
	while (t >= 0)
	{
		x[t] = nb % 10;
		nb /= 10;
		t--;
	}
}

void	ft_putnbr(int nb)
{
	int	x[10];

	if (nb == 0)
		ft_putchar('0');
	else
	{
		if (nb == -2147483648)
			ft_preventoverflow();
		else
		{
			if (nb < 0)
			{
				ft_putchar('-');
				nb = nb + -2 * nb;
			}
			ft_fillarray(x, nb);
			ft_printnbr(x);
		}
	}
}

int	main (void)
{
	int	a;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int *******ptr7;
	int	********ptr8;
	int	*********nbr;

	void	ft_ultimate_ft(int *********nbr);

	nbr = &ptr8;
	ptr8 = &ptr7;
	ptr7 = &ptr6;
	ptr6 = &ptr5;
	ptr5 = &ptr4;
	ptr4 = &ptr3;
	ptr3 = &ptr2;
	ptr2 = &ptr1;
	ptr1 = &a;
	a = 21;
	ft_ultimate_ft(nbr);
	ft_putnbr(a);
	return (0);
}
