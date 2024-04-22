/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:51:11 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/29 14:08:09 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	source[15] = "Hola";
	char	destin[50] = "Caracola";

	printf("%s\n", source);
	printf("%s\n", destin);
	printf("%s", ft_strcat(destin, source));
	return (0);
}
