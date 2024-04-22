/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:49:48 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/25 23:29:16 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char	string[] = "akljhlkjhaskjdhf";
	
	if (ft_str_is_alpha(string) == 1)
			printf("%d, string contains abc symbols only", ft_str_is_alpha(string));
	else 
			printf ("%d, string contains non-alfabetical symbols", ft_str_is_alpha(string));
			
	return (0);
}
