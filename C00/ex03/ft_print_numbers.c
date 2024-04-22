/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:32:12 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/16 16:56:07 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);
void	ft_printchar(char c);

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	i;

	i = '0';
	while (i <= '9')
	{
		ft_printchar(i);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
