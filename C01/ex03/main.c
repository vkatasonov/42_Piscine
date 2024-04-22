/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:15:38 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/23 13:25:45 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	num1;
	int	num2;
	int	division;
	int	modulo;

	num1 = 8;
	num2 = 2;
	ft_div_mod(num1, num2, &division, &modulo);
	printf("division %d, modulo %d", division, modulo);
	return (0);
}