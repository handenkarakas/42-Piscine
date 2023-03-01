/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:10:00 by hankarak          #+#    #+#             */
/*   Updated: 2023/02/15 18:34:46 by hankarak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest [i] = src [j];
        i++;
        j++;
	}
	dest [i] = '\0';
	return (dest);
}
int main(void)
{
    char dest[]="hande";
    char src[]="beyza";
    
    printf("%s", ft_strncat(dest, src, 3));
}
