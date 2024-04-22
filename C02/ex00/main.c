/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:21:42 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/24 13:35:49 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char *ft_strcpy(char *dest, char *scr);

int	main(void)
{
	char	destination[12];
	char	source[] = {"Hello World"};
	ft_strcpy(destination, source);
	ft_putstr(destination);
	return (0);
}
