/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:00:13 by hankarak          #+#    #+#             */
/*   Updated: 2023/02/17 18:13:28 by hankarak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
		nb = nb * ft_recursive_power(nb, (power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb);
}
