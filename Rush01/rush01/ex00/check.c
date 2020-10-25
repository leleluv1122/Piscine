/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychoi <ychoi@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 08:15:45 by ychoi             #+#    #+#             */
/*   Updated: 2020/10/25 08:18:46 by ychoi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_sero(int b, int result_arr[4][4])
{
	int ck_sero[5];
	int n;
	int sero_flag;

	n = 0;
	while (n < 5)
		ck_sero[n++] = 0;
	n = 0;
	sero_flag = 0;
	while (n < 4)
	{
		if (result_arr[n][b] == 0)
			;
		else if (ck_sero[result_arr[n][b]] == 1)
		{
			sero_flag = 1;
			break ;
		}
		else
			ck_sero[result_arr[n][b]] = 1;
		n++;
	}
	return (sero_flag);
}

int		check_garo(int a, int result_arr[4][4])
{
	int ck_garo[5];
	int n;

	n = 0;
	while (n < 5)
		ck_garo[n++] = 0;
	n = 0;
	while (n < 4)
	{
		if (result_arr[a][n] == 0)
			;
		else if (ck_garo[result_arr[a][n]] == 1)
			return (1);
		else
			ck_garo[result_arr[a][n]] = 1;
		n++;
	}
	return (0);
}

int		check_duplication_sero_garo(int a, int b, int result_arr[4][4])
{
	int sero;
	int garo;

	sero = check_sero(b, result_arr);
	garo = check_garo(a, result_arr);
	if (sero == 1 || garo == 1)
		return (1);
	return (0);
}

int		check(int result_arr[4][4], int a, int b)
{
	if (check_duplication_sero_garo(a, b, result_arr))
		return (0);
	if (a == 3 && check_bottom_top(b, result_arr) == 1)
		return (0);
	if (b == 3 && check_left_right(a, result_arr) == 1)
		return (0);
	return (1);
}
