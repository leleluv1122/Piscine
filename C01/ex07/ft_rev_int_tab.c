/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 13:22:12 by seupark           #+#    #+#             */
/*   Updated: 2020/10/21 17:22:48 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	*tab2;
	int	i;
	int	j;
	int	t;

	tab2 = tab;
	i = 0;
	j = size - 1;
	while (i < j)
	{
		t = tab2[i];
		tab2[i] = tab2[j];
		tab2[j] = t;
		i++;
		j--;
	}
}
