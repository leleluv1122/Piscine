/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bottom_top.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychoi <ychoi@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 08:17:35 by ychoi             #+#    #+#             */
/*   Updated: 2020/10/25 08:21:46 by ychoi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_top(int b, int result_arr[4][4])
{
	int cnt;
	int n;
	int max_val;

	cnt = 1;
	n = 1;
	max_val = result_arr[0][b];
	while (n < 4)
	{
		if (result_arr[n][b] > max_val)
		{
			max_val = result_arr[n][b];
			cnt++;
		}
		n++;
	}
	if (cnt != g_argv_sero[b][0])
		return (1);
	return (0);
}

int		check_bottom(int b, int result_arr[4][4])
{
	int cnt;
	int n;
	int max_val;

	cnt = 1;
	n = 2;
	max_val = result_arr[3][b];
	while (n >= 0)
	{
		if (result_arr[n][b] > max_val)
		{
			max_val = result_arr[n][b];
			cnt++;
		}
		n--;
	}
	if (cnt != g_argv_sero[b][1])
		return (1);
	return (0);
}

int		check_bottom_top(int b, int result_arr[4][4])
{
	int top;
	int bottom;

	top = check_top(b, result_arr);
	bottom = check_bottom(b, result_arr);
	if (top == 1 || bottom == 1)
		return (1);
	return (0);
}
