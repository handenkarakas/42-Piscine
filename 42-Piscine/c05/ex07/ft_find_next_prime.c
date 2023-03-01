/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:10:13 by hankarak          #+#    #+#             */
/*   Updated: 2023/02/21 18:05:12 by hankarak         ###   ########.tr       */
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
	while (i < (nb / 2))
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
