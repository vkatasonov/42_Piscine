/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:24:49 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/29 17:02:27 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
	
int	main(void)
{
	int		result;
	char	*str1;
	char	*str2;

	str1 = "h";
	str2 = "H";
	result = ft_strcmp(str1, str2);
	printf("%i", result);
	if (result < 0)
	{
		printf("\n str1 is Less than str2");
	}
	else if (result > 0)
	{
		printf("\n str2 is Less than str1");
	}
	else
	{
		printf("\n str1 is Equal to str2");
	}
	return (0);
}
