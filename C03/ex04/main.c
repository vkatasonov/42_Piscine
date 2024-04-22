/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:48:20 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/29 14:33:26 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "The stuff to find things in";
	char	to_find [] = "things in";
	printf("Str is: %s \n", str);
	printf("To find is:  %s \n", to_find);
	printf("Final result is:  %s \n", ft_strstr(str, to_find));
	return (0);
}
