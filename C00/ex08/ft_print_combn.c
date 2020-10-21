/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:08:23 by seupark           #+#    #+#             */
/*   Updated: 2020/10/21 10:13:17 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_arr[10];

void	print_charn(int n)
{
	int		a;
	int		b;
	char	c;

	a = 0;
	b = 0;
	while (a < n)
	{
		write(1, &g_arr[a], 1);
		a++;
	}
	a = 0;
	while (a < n)
	{
		if (10 - n + a + '0' != g_arr[a])
			break ;
		b = 1;
		a++;
	}
	if (b == 1)
		return ;
	c = ',';
	write(1, &c, 1);
	c = ' ';
	write(1, &c, 1);
}

void	combi(int idx, int cnt, int n)
{
	if (cnt == n)
	{
		print_charn(n);
		return ;
	}
	while (idx <= 10 - n + cnt)
	{
		g_arr[cnt] = idx + '0';
		combi(idx + 1, cnt + 1, n);
		idx++;
	}
}

void	ft_print_combn(int n)
{
	int		a;

	a = 0;
	while (a < 10)
	{
		g_arr[0] = a + '0';
		combi(a + 1, 1, n);
		a++;
	}
}
