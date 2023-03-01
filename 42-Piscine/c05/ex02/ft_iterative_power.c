/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:57:10 by hankarak          #+#    #+#             */
/*   Updated: 2023/02/17 17:06:26 by hankarak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	sonuc;
	int	i;

	sonuc = 1;
	i = 0;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	while (i < power)
	{
		sonuc = sonuc * nb;
		i++;
	}
	return (sonuc);
}
