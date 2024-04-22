/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:39:27 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/25 23:43:01 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	abc_print[] = "abc@##$%^&*§()^© _+xyz";

	if (ft_str_is_printable(abc_print) == 1)
		printf("%d, the string is printable", ft_str_is_printable(abc_print));
	else
		printf ("%d, contain other symbols", ft_str_is_printable(abc_print));
	return (0);
}
