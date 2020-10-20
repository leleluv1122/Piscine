/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:54:32 by seupark           #+#    #+#             */
/*   Updated: 2020/10/20 15:00:23 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_arr[10];

void	print_char(int size)
{
	while (size--)
		write(1, &g_arr[size], 1);
}

void	char_fix(int nb)
{
	int		size;

	size = 0;
	while (nb)
	{
		g_arr[size] = (char)(nb % 10) + '0';
		nb /= 10;
		size++;
	}
	print_char(size);
}

void	ft_putnbr(int nb)
{
	char	c;
	char	*cc;

	if (nb > 0)
		char_fix(nb);
	else if (nb == 0)
	{
		c = (char)nb + '0';
		write(1, &c, 1);
	}
	else
	{
		c = '-';
		write(1, &c, 1);
		if (nb == -2147483648)
		{
			cc = "2147483648";
			write(1, cc, 10);
		}
		else
			char_fix(-1 * nb);
	}
}
