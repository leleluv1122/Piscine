/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 21:17:24 by seupark           #+#    #+#             */
/*   Updated: 2020/10/17 21:44:50 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char arr[3];
int visited[10];

void	comb (int idx, int cnt)
{
	if(cnt == 2)
	{
		int i = 0;
		while(1)
		{
			write(1, arr[i], 1);
			if(i == 2)
				break;
			i++;
		}
		return;
	}

	int a = 0;
	while(1)
	{
		if(visited[a] == 0)
		{
			visited[a] = 1;
			
		}		
	}
}

void	ft_print_comb (void)
{
	
}
