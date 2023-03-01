/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:15:33 by hankarak          #+#    #+#             */
/*   Updated: 2023/02/17 18:23:03 by hankarak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	sayac;
	int	i;

	sayac = 0;
	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			sayac++;
		}
		i++;
	}
	if (sayac == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
