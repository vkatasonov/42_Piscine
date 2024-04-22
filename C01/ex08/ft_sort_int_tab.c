/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:36:30 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/23 12:21:20 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - j - 1)
		{
			if (tab[i] > tab [i +1])
			{
				temp = tab[i];
				tab[i] = tab [i + 1];
				tab [i +1] = temp;
			}
			i++;
		}
		j++;
	}
}
