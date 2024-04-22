/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:10:24 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/23 13:02:59 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	void	ft_ft();
	int	a;
	int	*p_a;

	a = 10;
	p_a = &a;
	printf("Value before: %d \n", a);
	ft_ft(p_a);
	printf("Value after: %d \n", a);
	return (0);
}
