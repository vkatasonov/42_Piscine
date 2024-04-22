/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:26:14 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/29 19:44:09 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "Let's have fun";
	char dest[] = "school 42: ";

	printf("%i \n", ft_strlcat(dest, src, 30));
	printf("%s \n", dest);
	return (0);
}
