/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:01:40 by hankarak          #+#    #+#             */
/*   Updated: 2023/02/10 18:22:56 by hankarak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	degis;

	i = 0;
	while (i < (size / 2))
	{
		degis = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = degis;
		i++;
	}
}
