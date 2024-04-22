/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:29:50 by vkatason          #+#    #+#             */
/*   Updated: 2022/08/27 18:21:01 by vkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = (str[0] - 'a') + 'A';
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i]) >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 'A') + 'a';
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
				if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
					if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
						str[i] = (str[i] - 'a') + 'A';
		i++;
	}
	return (str);
}
