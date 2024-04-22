/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:13:30 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/22 18:20:27 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putchar('x');
	return (0);
}