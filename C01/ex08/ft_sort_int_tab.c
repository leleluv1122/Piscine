/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:01:07 by seupark           #+#    #+#             */
/*   Updated: 2020/10/21 19:05:39 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int *g_tab2;

int		compare(int i, int size)
{
	int	idx;
	int	num;

	idx = 0;
	num = g_tab2[0];
	while (i <= size)
	{
		if (g_tab2[i] > num)
		{
			num = g_tab2[i];
			idx = i;
		}
		i++;
	}
	return (idx);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	idx;
	int	temp;

	g_tab2 = tab;
	size -= 1;
	while (size >= 0)
	{
		idx = compare(idx, size);
		temp = g_tab2[size];
		g_tab2[size] = g_tab2[idx];
		g_tab2[idx] = temp;
		size--;
	}
}
