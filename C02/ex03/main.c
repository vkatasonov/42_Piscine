/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:49:48 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/25 23:32:54 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	num[] = "1234567ghjhj0";

	if (ft_str_is_numeric(num) == 1)
		printf("%d, the string is numeric", ft_str_is_numeric(num));
	else
		printf ("%d, contain other symbols", ft_str_is_numeric(num));
	return (0);
}
