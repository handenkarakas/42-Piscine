/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:46:28 by hankarak          #+#    #+#             */
/*   Updated: 2023/02/18 19:09:14 by hankarak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_sqrt(int nb)
{
	long	sqrt;

	sqrt = 1;
	if (nb > 0)
	{
		while (sqrt * sqrt <= nb)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			else if (sqrt >= 2147483647)
				return (0);
			sqrt++;
		}
	}
	return (0);
}
