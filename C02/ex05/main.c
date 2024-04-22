/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:27:44 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/25 23:38:05 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	abc_caps[] = "ABCDEFGHIJKLMNOPQRSTVUWXYZ";

	if (ft_str_is_uppercase(abc_caps) == 1)
		printf("%d, the string is uppercase alphabet", ft_str_is_uppercase(abc_caps));
	else
		printf ("%d, contain other symbols", ft_str_is_uppercase(abc_caps));
	return (0);
	
}
