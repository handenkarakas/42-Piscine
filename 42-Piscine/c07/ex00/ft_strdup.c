/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinc <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:47:52 by rdinc             #+#    #+#             */
/*   Updated: 2023/02/20 10:17:04 by rdinc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strsize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*c;

	i = 0;
	c = (char *)malloc(ft_strsize(src) * sizeof(char));
	if (!c)
		return (NULL);
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
