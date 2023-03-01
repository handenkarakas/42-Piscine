/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinc <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:49:42 by rdinc             #+#    #+#             */
/*   Updated: 2023/02/17 16:44:26 by rdinc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*n;
	int	x;

	x = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	n = (int *)malloc(x * sizeof(int *));
	while (i < x && min < max)
	{
		n[i] = min;
		min++;
		i++;
	}
	return (n);
}
