/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:03:32 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/23 13:36:48 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i + 1 <= size / 2)
	{
		temp = tab[size - i -1];
		tab[size - i - 1] = tab[i];
		tab[i] = temp;
		i++;
	}
}
