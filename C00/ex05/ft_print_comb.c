/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:10:32 by seupark           #+#    #+#             */
/*   Updated: 2020/10/20 14:16:49 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_arr[3];

void	print_combi(void)
{
	int		b;
	char	h;

	b = 0;
	while (b < 3)
	{
		write(1, &g_arr[b], 1);
		b++;
	}
	if (!(g_arr[0] == '7' && g_arr[1] == '8' && g_arr[2] == '9'))
	{
		h = ',';
		write(1, &h, 1);
		h = ' ';
		write(1, &h, 1);
	}
}

void	combi(int idx, int cnt)
{
	int		d;
	char	c;

	if (cnt == 3)
	{
		print_combi();
		return ;
	}
	d = idx + 1;
	while (1)
	{
		c = (char)d + '0';
		g_arr[cnt] = c;
		combi(d, cnt + 1);
		if (cnt == 1 && d == 8)
			break ;
		if (cnt == 2 && d == 9)
			break ;
		d++;
	}
}

void	ft_print_comb(void)
{
	int		a;
	char	c;

	a = 0;
	while (a <= 7)
	{
		c = (int)a + '0';
		g_arr[0] = c;
		combi(a++, 1);
	}
}
