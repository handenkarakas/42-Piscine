/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:28:53 by hankarak          #+#    #+#             */
/*   Updated: 2023/02/15 18:12:04 by hankarak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	sayici;

	sayici = 0;
	while (*str != '\0')
	{
		sayici++;
		str++;
	}
	return (sayici);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	i;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	s = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && s + 1 < size)
	{
		dest[s] = src[i];
		s++;
		i++;
	}
	dest[s] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}

int main(void)
{
    char dest[]="hande karakas";
    char src[]="12345";
    printf("%d", ft_strlcat(dest, src, 12));
}
