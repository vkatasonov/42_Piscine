/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:39:14 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/18 17:37:37 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	counter;

	counter = 'a';
	while (counter <= 'z')
	{
		ft_putchar(counter);
		counter++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
