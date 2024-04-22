/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:18:18 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/23 13:30:32 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	mystring[] = {"Hello world\n"};
	int lenght;

	lenght = ft_strlen(mystring);
	printf("The number of symbols is: %d", lenght);
	return (0);
}
