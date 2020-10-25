/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_left_right.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychoi <ychoi@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 08:18:15 by ychoi             #+#    #+#             */
/*   Updated: 2020/10/25 08:19:05 by ychoi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_left(int a, int result_arr[4][4])
{
	int cnt;
	int n;
	int max_val;

	cnt = 1;
	n = 1;
	max_val = result_arr[a][0];
	while (n < 4)
	{
		if (result_arr[a][n] > max_val)
		{
			max_val = result_arr[a][n];
			cnt++;
		}
		n++;
	}
	if (g_argv_garo[a][0] != cnt)
		return (1);
	return (0);
}

int		check_right(int a, int result_arr[4][4])
{
	int cnt;
	int n;
	int max_val;

	cnt = 1;
	n = 2;
	max_val = result_arr[a][3];
	while (n >= 0)
	{
		if (result_arr[a][n] > max_val)
		{
			max_val = result_arr[a][n];
			cnt++;
		}
		n--;
	}
	if (cnt != g_argv_garo[a][1])
		return (1);
	return (0);
}

int		check_left_right(int a, int result_arr[4][4])
{
	int	left;
	int	right;

	left = check_left(a, result_arr);
	right = check_right(a, result_arr);
	if (left == 1 || right == 1)
		return (1);
	return (0);
}
