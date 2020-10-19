/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 21:17:24 by seupark           #+#    #+#             */
/*   Updated: 2020/10/19 14:13:46 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char arr[3];

void	combi(int idx, int cnt)
{
	if (cnt == 3)
	{
		int b = 0;
		while(b < 3)
		{
			write(1, &arr[b], 1);
			b++;
		}
		if(arr[0] == '7' && arr[1] == '8' && arr[2] == '9')
			;
		else
		{
			char h = ',';
			write(1, &h, 1);
			h = ' ';
			write(1, &h, 1);
		}
		return;
	}
	
	int d = idx + 1;
	while(1)
	{
		char c = (char)d + '0';
		arr[cnt] = c;
		combi(d, cnt + 1);
		if(cnt == 1 && d == 8)
			break;
		if(cnt == 2 && d == 9)
			break;
		d++;
	}
}

void 	ft_print_comb(void)
{
	int a = 0;
	while(a <= 7)
	{
		char c = (int)a + '0';
		arr[0] = c;
		combi(a++, 1);
	}
}
