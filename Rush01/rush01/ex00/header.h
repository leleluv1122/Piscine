/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychoi <ychoi@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 08:09:35 by ychoi             #+#    #+#             */
/*   Updated: 2020/10/25 08:25:44 by ychoi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

int		g_flag;
int		g_argv_garo[4][2];
int		g_argv_sero[4][2];
int		check_top(int b, int result_arr[4][4]);
int		check_bottom(int b, int result_arr[4][4]);
int		check_bottom_top(int b, int result_arr[4][4]);
int		check_left(int a, int result_arr[4][4]);
int		check_right(int a, int result_arr[4][4]);
int		check_left_right(int a, int result_arr[4][4]);
int		check_sero(int b, int result_arr[4][4]);
int		check_garo(int a, int result_arr[4][4]);
int		check_duplication_sero_garo(int a, int b, int result_arr[4][4]);
int		check(int result_arr[4][4], int a, int b);
void	result_arr_zero_padding(int result_arr[4][4]);
int		exception(int argc, char *argv[]);
void	dfs(int result_arr[4][4], int a, int b);
void	ft_putchar(char c);
void	print_box(int result_arr[4][4]);

#endif
