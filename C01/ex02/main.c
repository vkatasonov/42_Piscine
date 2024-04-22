/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:14:31 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/23 13:23:50 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 8;
	num2 = 7;
	printf("value of a: %d, \nValue of b: %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("value of ptrnum1: %d, \nValue of ptrnum2: %d\n", num1, num2);
}
