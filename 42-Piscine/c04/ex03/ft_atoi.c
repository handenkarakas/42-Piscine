/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:34:38 by hankarak          #+#    #+#             */
/*   Updated: 2023/02/16 21:35:18 by hankarak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	to;
	int	negative;

	i = 0;
	to = 0;
	negative = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = -negative;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		to = to * 10 + str[i] - 48;
		i++;
	}
	return (to * negative);
}
