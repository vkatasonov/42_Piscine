/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:19:36 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/18 17:43:36 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write (1, "N", 1);
	}
}

int	main(void)
{
	int	num;

	num = 6;
	ft_is_negative(num);
	return (0);
}
