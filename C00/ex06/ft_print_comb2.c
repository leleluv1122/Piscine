/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:28:25 by seupark           #+#    #+#             */
/*   Updated: 2020/10/20 14:41:28 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_first_arr[2];
char	g_second_arr[2];

void	print_char(void)
{
	char	c;

	write(1, &g_first_arr[0], 1);
	write(1, &g_first_arr[1], 1);
	c = ' ';
	write(1, &c, 1);
	write(1, &g_second_arr[0], 1);
	write(1, &g_second_arr[1], 1);
	if (g_first_arr[0] == '9' && g_first_arr[1] == '8')
		if (g_second_arr[0] == '9' && g_second_arr[1] == '9')
			return ;
	c = ',';
	write(1, &c, 1);
	c = ' ';
	write(1, &c, 1);
}

void	combi(int idx)
{
	int		a;
	int		d;

	a = idx + 1;
	while (a < 100)
	{
		if (a < 10)
		{
			g_second_arr[0] = '0';
			g_second_arr[1] = a + '0';
		}
		else
		{
			d = a / 10;
			g_second_arr[0] = d + '0';
			d = a % 10;
			g_second_arr[1] = d + '0';
		}
		a++;
		print_char();
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		d;

	a = 0;
	while (a < 100)
	{
		if (a < 10)
		{
			g_first_arr[0] = '0';
			g_first_arr[1] = a + '0';
		}
		else
		{
			d = a / 10;
			g_first_arr[0] = d + '0';
			d = a % 10;
			g_first_arr[1] = d + '0';
		}
		combi(a);
		a++;
	}
}
