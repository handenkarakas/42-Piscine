/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:56:48 by hankarak          #+#    #+#             */
/*   Updated: 2023/02/12 19:19:25 by hankarak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	s;
	int	i;

	s = 0;
	i = 0;
	while (str[s] != '\0')
	{
		if (i == 0 && (str[s] >= 'a' && str[s] <= 'z'))
		{
			str[s] -= 32;
			i++;
		}
		else if (i > 0 && (str[s] >= 'A' && str[s] <= 'Z'))
			str[s] += 32;
		else if ((str[s] < '0' || (str[s] > '9' && str[s] < 'A')
				|| (str[s] > 'Z' && str[s] < 'a') || str[s] > 'z'))
			i = 0;
		else
			i++;
		s++;
	}
	return (str);
}
