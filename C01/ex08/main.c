/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:20:29 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/23 13:38:12 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int j[] = {12, 65, 3, 2, 1};
	int	cont;

	cont = 0;
	ft_sort_int_tab(j, 5);
	while (cont < 5)
	{
		printf("%i \n", j[cont]);
        cont++;	
	}
	return (0);
}
