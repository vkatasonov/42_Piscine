/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:16:34 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/23 13:27:20 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	ptra;
	int	ptrb;

	ptra = 75;
	ptrb = 7;
	ft_ultimate_div_mod(&ptra, &ptrb);
	printf("div result: %d, rest of division: %d", ptra, ptrb);
	return (0);
}