/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:41:55 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/26 10:46:41 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	abc_low[] = "abcdefghyjklmnopqrstvuwxyz";

	if (ft_str_is_lowercase(abc_low) == 1)
		printf("%d, the string is lowercase alphabet", ft_str_is_lowercase(abc_low));
	else
		printf ("%d, contain other symbols", ft_str_is_lowercase(abc_low));
	return (0);
	
}
