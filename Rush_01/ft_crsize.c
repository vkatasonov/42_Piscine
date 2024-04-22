/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_crsize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:46:32 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/21 19:34:54 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_crsize(char *input)
{
	int	x;
	int	crsize;

	x = 0;
	while (input[x] != '\0')
	{
		x++;
	}
	crsize = x / 4;
}
