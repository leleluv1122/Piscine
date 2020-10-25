/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychoi <ychoi@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 08:09:57 by ychoi             #+#    #+#             */
/*   Updated: 2020/10/25 08:16:30 by ychoi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	result_arr_zero_padding(int result_arr[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			result_arr[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		exception(int argc, char *argv[])
{
	int i;
	int n;

	if (argc != 2 || argv[1][0] == '\0')
		return (0);
	i = 0;
	n = 0;
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 0 && '1' <= argv[1][i] && argv[1][i] <= '4')
			;
		else if (i % 2 == 1 && argv[1][i] == ' ')
			;
		else
			return (0);
		if (n > 30)
			return (0);
		n++;
		i++;
	}
	return (1);
}

void	dfs(int result_arr[4][4], int a, int b)
{
	int n;

	if (a == 4 && b == 0)
	{
		print_box(result_arr);
		g_flag = 1;
		return ;
	}
	n = 1;
	while (n < 5)
	{
		result_arr[a][b] = n;
		if (check(result_arr, a, b))
		{
			if (b == 3)
				dfs(result_arr, a + 1, 0);
			else
				dfs(result_arr, a, b + 1);
			if (g_flag == 1)
				return ;
		}
		result_arr[a][b] = 0;
		n++;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int j;
	int result_arr[4][4];

	if (exception(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	result_arr_zero_padding(result_arr);
	j = 0;
	i = 0;
	while (i != 4)
	{
		g_argv_garo[i][0] = argv[1][j] - '0';
		g_argv_garo[i][1] = argv[1][j + 8] - '0';
		g_argv_sero[i][0] = argv[1][j + 16] - '0';
		g_argv_sero[i][1] = argv[1][j + 24] - '0';
		j = j + 2;
		i++;
	}
	dfs(result_arr, 0, 0);
	if (g_flag == 0)
		write(1, "Error\n", 6);
	return (-1);
}
