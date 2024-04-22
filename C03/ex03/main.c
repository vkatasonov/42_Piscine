/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:51:11 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/29 12:04:37 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	source[15] = "Hola";
	char	destin[50] = "Caracola";
	unsigned int	a;

	a = 3;
	printf("%s\n", source);
	printf("%s\n", destin);
	printf("%s", ft_strncat(destin, source, a));
	return (0);
}
