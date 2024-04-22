/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:49:13 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/30 14:51:33 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	result;
	int	original;
	int	ft_atoi(char *str);

	if (ac == 2)
	{
		result = ft_atoi(av[1]);
		original = ft_atoi(av[1]);
		printf("result: %d | original: %d \n", result, original);
	}
	return (0);
}
