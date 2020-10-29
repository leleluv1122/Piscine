/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_box.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychoi <ychoi@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 08:13:34 by ychoi             #+#    #+#             */
/*   Updated: 2020/10/25 08:39:18 by ychoi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_box(int result_arr[4][4])
{
	int n;
	int m;

	n = 0;
	while (n < 4)
	{
		m = 0;
		while (m < 4)
		{
			ft_putchar(result_arr[n][m] + '0');
			if (m == 3)
				break ;
			ft_putchar(' ');
			m++;
		}
		ft_putchar('\n');
		n++;
	}
}
