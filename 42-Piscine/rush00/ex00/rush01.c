/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:49:58 by kbilgili          #+#    #+#             */
/*   Updated: 2023/02/05 21:50:47 by kbilgili         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	conditional_checks(int x, int y, int sat, int sut);

void	rush(int x, int y)
{
	int	sat;
	int	sut;

	if (x <= 0 || y <= 0)
		write(1, "x ve y değerleri 0 veya 0'dan küçük olamaz.\n", 48);
	sat = 1;
	sut = 1;
	while (sat <= y)
	{
		sut = 1;
		while (sut <= x)
		{
			conditional_checks(x, y, sat, sut);
			sut++;
		}
		sat++;
		ft_putchar('\n');
	}
}

void	conditional_checks(int x, int y, int sat, int sut)
{
	int	edge_case;

	edge_case = (sat == y && sut == x && x != 1 && y != 1);
	if ((sat == 1 && sut == 1) || edge_case)
		ft_putchar('/');
	else if ((sat == 1 && sut == x) || (sat == y && sut == 1))
		ft_putchar('\\');
	else if (sat == 1 || sut == 1 || sat == y || sut == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}
